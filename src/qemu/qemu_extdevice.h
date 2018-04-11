/*
 * qemu_extdevice.h: QEMU external devices support
 *
 * Copyright (C) 2014, 2018 IBM Corporation
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library.  If not, see
 * <http://www.gnu.org/licenses/>.
 *
 * Author: Stefan Berger <stefanb@linux.vnet.ibm.com>
 */
#ifndef __QEMU_EXTDEVICE_H__
# define __QEMU_EXTDEVICE_H__

# include "qemu_conf.h"
# include "qemu_domain.h"

int qemuExtDevicesInitPaths(virQEMUDriverPtr driver,
                            virDomainDefPtr def)
    ATTRIBUTE_RETURN_CHECK;

int qemuExtDevicesPrepareHost(virQEMUDriverPtr driver,
                              virDomainDefPtr def)
    ATTRIBUTE_RETURN_CHECK;

int qemuExtDevicesStart(virQEMUDriverPtr driver,
                        virDomainDefPtr def,
                        qemuDomainLogContextPtr logCtxt)
    ATTRIBUTE_RETURN_CHECK;

void qemuExtDevicesStop(virQEMUDriverPtr driver, virDomainDefPtr def);

#endif /* __QEMU_EXTDEVICE_H__ */

