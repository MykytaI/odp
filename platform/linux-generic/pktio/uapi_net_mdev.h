/* Copyright (c) 2018, Linaro Limited
 * All rights reserved.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 */

#ifndef _UAPI__LINUX_NET_MDEV_H
#define _UAPI__LINUX_NET_MDEV_H

#include <linux/types.h>
#include <linux/ioctl.h>

enum net_mdev_types {
	VFIO_NET_MDEV_SHADOW,
	VFIO_NET_DESCRIPTORS,
	VFIO_NET_MMIO,
};

enum net_mdev_subtypes {
	VFIO_NET_MDEV_STATS,
	VFIO_NET_MDEV_RX,
	VFIO_NET_MDEV_TX,
	VFIO_NET_MDEV_BARS,
};

enum vfio_net_mdev_regions {
	VFIO_NET_MDEV_SHADOW_REGION_INDEX,
	VFIO_NET_MDEV_RX_REGION_INDEX,
	VFIO_NET_MDEV_TX_REGION_INDEX,
	VFIO_NET_MDEV_NUM_REGIONS,
};

#endif /* _UAPI__LINUX_NET_MDEV_H */
