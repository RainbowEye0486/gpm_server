// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from gpm_interfaces:srv/ConveyerReport.idl
// generated code does not contain a copyright notice

#ifndef GPM_INTERFACES__SRV__DETAIL__CONVEYER_REPORT__FUNCTIONS_H_
#define GPM_INTERFACES__SRV__DETAIL__CONVEYER_REPORT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "gpm_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "gpm_interfaces/srv/detail/conveyer_report__struct.h"

/// Initialize srv/ConveyerReport message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * gpm_interfaces__srv__ConveyerReport_Request
 * )) before or use
 * gpm_interfaces__srv__ConveyerReport_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_gpm_interfaces
bool
gpm_interfaces__srv__ConveyerReport_Request__init(gpm_interfaces__srv__ConveyerReport_Request * msg);

/// Finalize srv/ConveyerReport message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpm_interfaces
void
gpm_interfaces__srv__ConveyerReport_Request__fini(gpm_interfaces__srv__ConveyerReport_Request * msg);

/// Create srv/ConveyerReport message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * gpm_interfaces__srv__ConveyerReport_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gpm_interfaces
gpm_interfaces__srv__ConveyerReport_Request *
gpm_interfaces__srv__ConveyerReport_Request__create();

/// Destroy srv/ConveyerReport message.
/**
 * It calls
 * gpm_interfaces__srv__ConveyerReport_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpm_interfaces
void
gpm_interfaces__srv__ConveyerReport_Request__destroy(gpm_interfaces__srv__ConveyerReport_Request * msg);


/// Initialize array of srv/ConveyerReport messages.
/**
 * It allocates the memory for the number of elements and calls
 * gpm_interfaces__srv__ConveyerReport_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpm_interfaces
bool
gpm_interfaces__srv__ConveyerReport_Request__Sequence__init(gpm_interfaces__srv__ConveyerReport_Request__Sequence * array, size_t size);

/// Finalize array of srv/ConveyerReport messages.
/**
 * It calls
 * gpm_interfaces__srv__ConveyerReport_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpm_interfaces
void
gpm_interfaces__srv__ConveyerReport_Request__Sequence__fini(gpm_interfaces__srv__ConveyerReport_Request__Sequence * array);

/// Create array of srv/ConveyerReport messages.
/**
 * It allocates the memory for the array and calls
 * gpm_interfaces__srv__ConveyerReport_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gpm_interfaces
gpm_interfaces__srv__ConveyerReport_Request__Sequence *
gpm_interfaces__srv__ConveyerReport_Request__Sequence__create(size_t size);

/// Destroy array of srv/ConveyerReport messages.
/**
 * It calls
 * gpm_interfaces__srv__ConveyerReport_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpm_interfaces
void
gpm_interfaces__srv__ConveyerReport_Request__Sequence__destroy(gpm_interfaces__srv__ConveyerReport_Request__Sequence * array);

/// Initialize srv/ConveyerReport message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * gpm_interfaces__srv__ConveyerReport_Response
 * )) before or use
 * gpm_interfaces__srv__ConveyerReport_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_gpm_interfaces
bool
gpm_interfaces__srv__ConveyerReport_Response__init(gpm_interfaces__srv__ConveyerReport_Response * msg);

/// Finalize srv/ConveyerReport message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpm_interfaces
void
gpm_interfaces__srv__ConveyerReport_Response__fini(gpm_interfaces__srv__ConveyerReport_Response * msg);

/// Create srv/ConveyerReport message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * gpm_interfaces__srv__ConveyerReport_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gpm_interfaces
gpm_interfaces__srv__ConveyerReport_Response *
gpm_interfaces__srv__ConveyerReport_Response__create();

/// Destroy srv/ConveyerReport message.
/**
 * It calls
 * gpm_interfaces__srv__ConveyerReport_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpm_interfaces
void
gpm_interfaces__srv__ConveyerReport_Response__destroy(gpm_interfaces__srv__ConveyerReport_Response * msg);


/// Initialize array of srv/ConveyerReport messages.
/**
 * It allocates the memory for the number of elements and calls
 * gpm_interfaces__srv__ConveyerReport_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpm_interfaces
bool
gpm_interfaces__srv__ConveyerReport_Response__Sequence__init(gpm_interfaces__srv__ConveyerReport_Response__Sequence * array, size_t size);

/// Finalize array of srv/ConveyerReport messages.
/**
 * It calls
 * gpm_interfaces__srv__ConveyerReport_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpm_interfaces
void
gpm_interfaces__srv__ConveyerReport_Response__Sequence__fini(gpm_interfaces__srv__ConveyerReport_Response__Sequence * array);

/// Create array of srv/ConveyerReport messages.
/**
 * It allocates the memory for the array and calls
 * gpm_interfaces__srv__ConveyerReport_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gpm_interfaces
gpm_interfaces__srv__ConveyerReport_Response__Sequence *
gpm_interfaces__srv__ConveyerReport_Response__Sequence__create(size_t size);

/// Destroy array of srv/ConveyerReport messages.
/**
 * It calls
 * gpm_interfaces__srv__ConveyerReport_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpm_interfaces
void
gpm_interfaces__srv__ConveyerReport_Response__Sequence__destroy(gpm_interfaces__srv__ConveyerReport_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // GPM_INTERFACES__SRV__DETAIL__CONVEYER_REPORT__FUNCTIONS_H_
