global-incdirs-y += .
srcs-y += main.c
srcs-$(CFG_ARM32_core) += plat_init.S

# Build PTA
subdirs-y += pta
