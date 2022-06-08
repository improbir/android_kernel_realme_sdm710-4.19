# SPDX-License-Identifier: GPL-2.0
obj-$(CONFIG_ION) +=	ion.o ion-ioctl.o ion_heap.o \
			ion_page_pool.o ion_system_heap.o \
			ion_carveout_heap.o ion_chunk_heap.o \
			ion_system_secure_heap.o ion_cma_heap.o \
			ion_secure_util.o ion_cma_secure_heap.o msm/

ifdef CONFIG_COMPAT
obj-$(CONFIG_ION_LEGACY) += compat_ion.o
endif
obj-$(CONFIG_ION_MSM) += msm/

#ifdef VENDOR_EDIT
obj-y	+= oplus_ion/
#endif /* VENDOR_EDIT */
