/*
 * Copyright (c) 2015 - 2016, Freescale Semiconductor, Inc.
 * Copyright 2016 NXP
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * o Redistributions of source code must retain the above copyright notice, this list
 *   of conditions and the following disclaimer.
 *
 * o Redistributions in binary form must reproduce the above copyright notice, this
 *   list of conditions and the following disclaimer in the documentation and/or
 *   other materials provided with the distribution.
 *
 * o Neither the name of the copyright holder nor the names of its
 *   contributors may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef __USB_DEVICE_DESCRIPTOR_H__
#define __USB_DEVICE_DESCRIPTOR_H__

/*******************************************************************************
 * Definitions
 ******************************************************************************/

#define USB_DEVICE_SPECIFIC_BCD_VERSION (0x0200U)
#define USB_DEVICE_DEMO_BCD_VERSION (0x0101U)

#define USB_DEVICE_CLASS (0xEFU)
#define USB_DEVICE_SUBCLASS (0x02U)
#define USB_DEVICE_PROTOCOL (0x01U)

#define USB_DEVICE_MAX_POWER (0x32U)

#if defined(USB_DEVICE_VIDEO_CLASS_VERSION_1_5) && (USB_DEVICE_VIDEO_CLASS_VERSION_1_5 > 0U)

#define USB_DEVICE_VIDEO_SPECIFIC_BCD_VERSION (0x0150U)
#define USB_DEVICE_VIDEO_VIRTUAL_CAMERA_PROTOCOL USB_DEVICE_VIDEO_PC_PROTOCOL_15
#define USB_DESCRIPTOR_LENGTH_CONFIGURATION_ALL (0xC4U)

#elif defined(USB_DEVICE_VIDEO_CLASS_VERSION_1_1) && (USB_DEVICE_VIDEO_CLASS_VERSION_1_1 > 0U)

#define USB_DEVICE_VIDEO_SPECIFIC_BCD_VERSION (0x0110U)
#define USB_DEVICE_VIDEO_VIRTUAL_CAMERA_PROTOCOL USB_DEVICE_VIDEO_PC_PROTOCOL_UNDEFINED
#define USB_DESCRIPTOR_LENGTH_CONFIGURATION_ALL (0xC3U)

#else

#define USB_DEVICE_VIDEO_SPECIFIC_BCD_VERSION (0x0100U)
#define USB_DEVICE_VIDEO_VIRTUAL_CAMERA_PROTOCOL USB_DEVICE_VIDEO_PC_PROTOCOL_UNDEFINED
#define USB_DESCRIPTOR_LENGTH_CONFIGURATION_ALL (0xC2U)

#endif

#define USB_DESCRIPTOR_LENGTH_INTERFACE_ASSOCIATION (0x08U)
#define USB_DESCRIPTOR_LENGTH_STRING0 (4U)
#define USB_DESCRIPTOR_LENGTH_STRING1 (38U)
#define USB_DESCRIPTOR_LENGTH_STRING2 (22U)
#define USB_DESCRIPTOR_LENGTH_STRING3 (44U)

#define USB_DEVICE_CONFIGURATION_COUNT (1U)
#define USB_DEVICE_STRING_COUNT (4U)
#define USB_DEVICE_LANGUAGE_COUNT (1U)

#define USB_VIDEO_VIRTUAL_CAMERA_CONFIGURE_INDEX (1U)

#define USB_VIDEO_VIRTUAL_CAMERA_CONTROL_INTERFACE_COUNT (1U)
#define USB_VIDEO_VIRTUAL_CAMERA_CONTROL_INTERFACE_INDEX (0U)
#define USB_VIDEO_VIRTUAL_CAMERA_CONTROL_ENDPOINT_COUNT (1U)
#define USB_VIDEO_VIRTUAL_CAMERA_CONTROL_ENDPOINT (1U)

#define HS_INTERRUPT_IN_PACKET_SIZE (8U)
#define FS_INTERRUPT_IN_PACKET_SIZE (8U)
#define HS_INTERRUPT_IN_INTERVAL (0x07U) /* 2^(7-1) = 8ms */
#define FS_INTERRUPT_IN_INTERVAL (0x08U)

#define USB_VIDEO_VIRTUAL_CAMERA_VC_INTERFACE_HEADER_LENGTH (0x0DU)
#define USB_VIDEO_VIRTUAL_CAMERA_VC_OUTPUT_TERMINAL_LENGTH (0x09U)

#if defined(USB_DEVICE_VIDEO_CLASS_VERSION_1_5) && (USB_DEVICE_VIDEO_CLASS_VERSION_1_5 > 0U)

#define USB_VIDEO_VIRTUAL_CAMERA_VC_PROCESSING_UNIT_LENGTH (0x0DU)
#define USB_VIDEO_VIRTUAL_CAMERA_VC_INPUT_TERMINAL_LENGTH (0x12U)

#elif defined(USB_DEVICE_VIDEO_CLASS_VERSION_1_1) && (USB_DEVICE_VIDEO_CLASS_VERSION_1_1 > 0U)

#define USB_VIDEO_VIRTUAL_CAMERA_VC_PROCESSING_UNIT_LENGTH (0x0CU)
#define USB_VIDEO_VIRTUAL_CAMERA_VC_INPUT_TERMINAL_LENGTH (0x12U)

#else

#define USB_VIDEO_VIRTUAL_CAMERA_VC_PROCESSING_UNIT_LENGTH (0x0BU)
#define USB_VIDEO_VIRTUAL_CAMERA_VC_INPUT_TERMINAL_LENGTH (0x12U)

#endif

#define USB_VIDEO_VIRTUAL_CAMERA_VC_INTERFACE_TOTAL_LENGTH                                                     \
    (USB_VIDEO_VIRTUAL_CAMERA_VC_INTERFACE_HEADER_LENGTH + USB_VIDEO_VIRTUAL_CAMERA_VC_INPUT_TERMINAL_LENGTH + \
     USB_VIDEO_VIRTUAL_CAMERA_VC_OUTPUT_TERMINAL_LENGTH + USB_VIDEO_VIRTUAL_CAMERA_VC_PROCESSING_UNIT_LENGTH)

#define USB_VIDEO_VIRTUAL_CAMERA_CLOCK_FREQUENCY (6000000U) /* 6MHz */

#define USB_VIDEO_VIRTUAL_CAMERA_STREAM_INTERFACE_COUNT (1U)
#define USB_VIDEO_VIRTUAL_CAMERA_STREAM_INTERFACE_INDEX (1U)
#define USB_VIDEO_VIRTUAL_CAMERA_STREAM_ENDPOINT_COUNT (1U)
#define USB_VIDEO_VIRTUAL_CAMERA_STREAM_ENDPOINT_IN (2U)
#define HS_STREAM_IN_PACKET_SIZE (512U)
#define FS_STREAM_IN_PACKET_SIZE (512U)
#define HS_STREAM_IN_INTERVAL (0x04U) /* 2^(4-1) = 1ms */
#define FS_STREAM_IN_INTERVAL (0x01U)

#define USB_VIDEO_VIRTUAL_CAMERA_STREAM_STILL_CAPTURE_METHOD (0x02U)
#define USB_VIDEO_VIRTUAL_CAMERA_STREAM_STILL_CAPTURE_TRIGGER_SUPPOTED (0x00U)

#define USB_VIDEO_VIRTUAL_CAMERA_VS_INTERFACE_HEADER_LENGTH (0x0EU)
#define USB_VIDEO_MJPEG_FORMAT_DESCRIPTOR_LENGTH (0x0BU)
#define USB_VIDEO_MJPEG_FRAME_DESCRIPTOR_LENGTH (0x32U)
#define USB_VIDEO_MJPEG_FRAME_STILL_DESCRIPTOR_LENGTH (0x0AU)
#define USB_VIDEO_VIRTUAL_CAMERA_VS_INTERFACE_TOTAL_LENGTH                                            \
    (USB_VIDEO_VIRTUAL_CAMERA_VS_INTERFACE_HEADER_LENGTH + USB_VIDEO_MJPEG_FORMAT_DESCRIPTOR_LENGTH + \
     USB_VIDEO_MJPEG_FRAME_DESCRIPTOR_LENGTH + USB_VIDEO_MJPEG_FRAME_STILL_DESCRIPTOR_LENGTH)

#define USB_VIDEO_VIRTUAL_CAMERA_INTERFACE_COUNT \
    (USB_VIDEO_VIRTUAL_CAMERA_CONTROL_INTERFACE_COUNT + USB_VIDEO_VIRTUAL_CAMERA_STREAM_INTERFACE_COUNT)

/* Stream format */
#define USB_VIDEO_VIRTUAL_CAMERA_FORMAT_COUNT (1U)
#define USB_VIDEO_VIRTUAL_CAMERA_MJPEG_FORMAT_INDEX (1U)

#define USB_VIDEO_VIRTUAL_CAMERA_MJPEG_FRAME_COUNT (1U)
#define USB_VIDEO_VIRTUAL_CAMERA_MJPEG_FRAME_INDEX (1U)

#define USB_VIDEO_VIRTUAL_CAMERA_MJPEG_FRAME_WIDTH (176U)
#define USB_VIDEO_VIRTUAL_CAMERA_MJPEG_FRAME_HEIGHT (144U)

#define USB_VIDEO_VIRTUAL_CAMERA_MJPEG_FRAME_INTERVAL_TYPE (6U)
#define USB_VIDEO_VIRTUAL_CAMERA_MJPEG_FRAME_INTERVAL_30FPS (10000000U / 30U)
#define USB_VIDEO_VIRTUAL_CAMERA_MJPEG_FRAME_INTERVAL_25FPS (10000000U / 25U)
#define USB_VIDEO_VIRTUAL_CAMERA_MJPEG_FRAME_INTERVAL_20FPS (10000000U / 20U)
#define USB_VIDEO_VIRTUAL_CAMERA_MJPEG_FRAME_INTERVAL_15FPS (10000000U / 15U)
#define USB_VIDEO_VIRTUAL_CAMERA_MJPEG_FRAME_INTERVAL_10FPS (10000000U / 10U)
#define USB_VIDEO_VIRTUAL_CAMERA_MJPEG_FRAME_INTERVAL_5FPS (10000000U / 5U)

#define USB_VIDEO_VIRTUAL_CAMERA_MJPEG_FRAME_DEFAULT_INTERVAL USB_VIDEO_VIRTUAL_CAMERA_MJPEG_FRAME_INTERVAL_15FPS
#define USB_VIDEO_VIRTUAL_CAMERA_MJPEG_FRAME_MIN_INTERVAL USB_VIDEO_VIRTUAL_CAMERA_MJPEG_FRAME_INTERVAL_30FPS
#define USB_VIDEO_VIRTUAL_CAMERA_MJPEG_FRAME_MAX_INTERVAL USB_VIDEO_VIRTUAL_CAMERA_MJPEG_FRAME_INTERVAL_5FPS

#define USB_VIDEO_VIRTUAL_CAMERA_MJPEG_FRAME_MIN_BIT_RATE                                             \
    (16U * USB_VIDEO_VIRTUAL_CAMERA_MJPEG_FRAME_WIDTH * USB_VIDEO_VIRTUAL_CAMERA_MJPEG_FRAME_HEIGHT * \
     (10000000U / USB_VIDEO_VIRTUAL_CAMERA_MJPEG_FRAME_MAX_INTERVAL))
#define USB_VIDEO_VIRTUAL_CAMERA_MJPEG_FRAME_MAX_BIT_RATE                                             \
    (16U * USB_VIDEO_VIRTUAL_CAMERA_MJPEG_FRAME_WIDTH * USB_VIDEO_VIRTUAL_CAMERA_MJPEG_FRAME_HEIGHT * \
     (10000000U / USB_VIDEO_VIRTUAL_CAMERA_MJPEG_FRAME_MIN_INTERVAL))

#define USB_VIDEO_VIRTUAL_CAMERA_MJPEG_FRAME_MAX_FRAME_SIZE \
    (2U * USB_VIDEO_VIRTUAL_CAMERA_MJPEG_FRAME_WIDTH * USB_VIDEO_VIRTUAL_CAMERA_MJPEG_FRAME_HEIGHT)

/* terminal unit ID */
#define USB_VIDEO_VIRTUAL_CAMERA_VC_INPUT_TERMINAL_ID (1U)
#define USB_VIDEO_VIRTUAL_CAMERA_VC_INPUT_TERMINAL_TYPE (USB_DEVICE_VIDEO_ITT_CAMERA)
#define USB_VIDEO_VIRTUAL_CAMERA_VC_OUTPUT_TERMINAL_ID (2U)
#define USB_VIDEO_VIRTUAL_CAMERA_VC_PROCESSING_UNIT_ID (3U)

/*******************************************************************************
 * API
 ******************************************************************************/

/* Configure the device according to the USB speed. */
extern usb_status_t USB_DeviceSetSpeed(uint8_t speed);

#endif /* __USB_DEVICE_DESCRIPTOR_H__ */
