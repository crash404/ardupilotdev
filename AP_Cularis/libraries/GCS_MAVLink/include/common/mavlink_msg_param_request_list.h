// MESSAGE PARAM_REQUEST_LIST PACKING

#define MAVLINK_MSG_ID_PARAM_REQUEST_LIST 21

typedef struct __mavlink_param_request_list_t 
{
	uint8_t target_system; ///< System ID
	uint8_t target_component; ///< Component ID

} mavlink_param_request_list_t;



/**
 * @brief Send a param_request_list message
 *
 * @param target_system System ID
 * @param target_component Component ID
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_param_request_list_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, uint8_t target_system, uint8_t target_component)
{
	uint16_t i = 0;
	msg->msgid = MAVLINK_MSG_ID_PARAM_REQUEST_LIST;

	i += put_uint8_t_by_index(target_system, i, msg->payload); //System ID
	i += put_uint8_t_by_index(target_component, i, msg->payload); //Component ID

	return mavlink_finalize_message(msg, system_id, component_id, i);
}

static inline uint16_t mavlink_msg_param_request_list_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_param_request_list_t* param_request_list)
{
	return mavlink_msg_param_request_list_pack(system_id, component_id, msg, param_request_list->target_system, param_request_list->target_component);
}

#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_param_request_list_send(mavlink_channel_t chan, uint8_t target_system, uint8_t target_component)
{
	mavlink_message_t msg;
	mavlink_msg_param_request_list_pack(mavlink_system.sysid, mavlink_system.compid, &msg, target_system, target_component);
	mavlink_send_uart(chan, &msg);
}

#endif
// MESSAGE PARAM_REQUEST_LIST UNPACKING

/**
 * @brief Get field target_system from param_request_list message
 *
 * @return System ID
 */
static inline uint8_t mavlink_msg_param_request_list_get_target_system(const mavlink_message_t* msg)
{
	return (uint8_t)(msg->payload)[0];
}

/**
 * @brief Get field target_component from param_request_list message
 *
 * @return Component ID
 */
static inline uint8_t mavlink_msg_param_request_list_get_target_component(const mavlink_message_t* msg)
{
	return (uint8_t)(msg->payload+sizeof(uint8_t))[0];
}

static inline void mavlink_msg_param_request_list_decode(const mavlink_message_t* msg, mavlink_param_request_list_t* param_request_list)
{
	param_request_list->target_system = mavlink_msg_param_request_list_get_target_system(msg);
	param_request_list->target_component = mavlink_msg_param_request_list_get_target_component(msg);
}
