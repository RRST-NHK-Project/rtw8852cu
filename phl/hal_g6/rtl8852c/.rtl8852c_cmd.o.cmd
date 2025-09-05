savedcmd_phl/hal_g6/rtl8852c/rtl8852c_cmd.o := gcc-13 -Wp,-MMD,phl/hal_g6/rtl8852c/.rtl8852c_cmd.o.d -nostdinc -I/usr/src/linux-headers-6.14.0-28-generic/arch/x86/include -I/usr/src/linux-headers-6.14.0-28-generic/arch/x86/include/generated -I/usr/src/linux-headers-6.14.0-28-generic/include -I/usr/src/linux-headers-6.14.0-28-generic/include -I/usr/src/linux-headers-6.14.0-28-generic/arch/x86/include/uapi -I/usr/src/linux-headers-6.14.0-28-generic/arch/x86/include/generated/uapi -I/usr/src/linux-headers-6.14.0-28-generic/include/uapi -I/usr/src/linux-headers-6.14.0-28-generic/include/generated/uapi -include /usr/src/linux-headers-6.14.0-28-generic/include/linux/compiler-version.h -include /usr/src/linux-headers-6.14.0-28-generic/include/linux/kconfig.h -I/usr/src/linux-headers-6.14.0-28-generic/ubuntu/include -include /usr/src/linux-headers-6.14.0-28-generic/include/linux/compiler_types.h -D__KERNEL__ -std=gnu11 -fshort-wchar -funsigned-char -fno-common -fno-PIE -fno-strict-aliasing -mno-sse -mno-mmx -mno-sse2 -mno-3dnow -mno-avx -fcf-protection=none -m64 -falign-jumps=1 -falign-loops=1 -mno-80387 -mno-fp-ret-in-387 -mpreferred-stack-boundary=3 -mskip-rax-setup -mtune=generic -mno-red-zone -mcmodel=kernel -Wno-sign-compare -fno-asynchronous-unwind-tables -mindirect-branch=thunk-extern -mindirect-branch-register -mindirect-branch-cs-prefix -mfunction-return=thunk-extern -fno-jump-tables -mharden-sls=all -fpatchable-function-entry=16,16 -fno-delete-null-pointer-checks -O2 -fno-allow-store-data-races -fstack-protector-strong -fno-omit-frame-pointer -fno-optimize-sibling-calls -ftrivial-auto-var-init=zero -fno-stack-clash-protection -fzero-call-used-regs=used-gpr -pg -mrecord-mcount -mfentry -DCC_USING_FENTRY -falign-functions=16 -fstrict-flex-arrays=3 -fno-strict-overflow -fno-stack-check -fconserve-stack -fno-builtin-wcslen -Wall -Wundef -Werror=implicit-function-declaration -Werror=implicit-int -Werror=return-type -Werror=strict-prototypes -Wno-format-security -Wno-trigraphs -Wno-frame-address -Wno-address-of-packed-member -Wmissing-declarations -Wmissing-prototypes -Wframe-larger-than=1024 -Wno-main -Wno-dangling-pointer -Wvla -Wno-pointer-sign -Wcast-function-type -Wno-stringop-overflow -Wno-array-bounds -Wno-alloc-size-larger-than -Wimplicit-fallthrough=5 -Werror=date-time -Werror=incompatible-pointer-types -Werror=designated-init -Wenum-conversion -Wextra -Wunused -Wno-unused-but-set-variable -Wno-unused-const-variable -Wno-packed-not-aligned -Wno-format-overflow -Wno-format-truncation -Wno-stringop-truncation -Wno-override-init -Wno-missing-field-initializers -Wno-type-limits -Wno-shift-negative-value -Wno-maybe-uninitialized -Wno-sign-compare -Wno-unused-parameter -g -gdwarf-5 -O1 -Wno-unused-variable -Wno-unused-label -Wno-unused -Wno-date-time -I././include -DRTW_NETWORK_LINK_MAX=3 -DDTYPE=DEV_TYPE_LEGACY -DCONFIG_MP_INCLUDED -DCONFIG_CMD_DISP -DCONFIG_PHL_TEST_SUITE -DCONFIG_POWER_SAVE -DCONFIG_BTC -DCONFIG_WIFI_6 -DCONFIG_EFUSE_CONFIG_FILE -DEFUSE_MAP_PATH=\"/system/etc/wifi/wifi_efuse_8852cu.map\" -DWIFIMAC_PATH=\"/data/wifimac.txt\" -DCONFIG_LOAD_PHY_PARA_FROM_FILE -DREALTEK_CONFIG_PATH=\"/lib/firmware/\" -DCONFIG_TXPWR_BY_RATE=1 -DCONFIG_TXPWR_BY_RATE_EN=1 -DCONFIG_TXPWR_LIMIT=1 -DCONFIG_TXPWR_LIMIT_EN=0 -DCONFIG_RTW_COUNTRY_CODE=\"JP\" -DCONFIG_RTW_ADAPTIVITY_EN=0 -DCONFIG_RTW_ADAPTIVITY_MODE=0 -DCONFIG_80211D -DCONFIG_RTW_COUNTRY_IE_SLAVE_EN_MODE=0 -DCONFIG_RTW_COUNTRY_IE_SLAVE_FLAGS=0x01 -DCONFIG_IEEE80211W -DCONFIG_LAYER2_ROAMING -DCONFIG_ROAMING_FLAG=0x3 -DHIGH_ACTIVE_HST2DEV=0 -DCONFIG_BR_EXT '-DCONFIG_BR_EXT_BRNAME="'br0'"' -DCONFIG_RTW_NAPI -DCONFIG_RTW_GRO -DCONFIG_RTW_NETIF_SG -DCONFIG_PROC_DEBUG -DCONFIG_RTW_UP_MAPPING_RULE=0 -DPLATFORM_LINUX -DUSE_TRUE_PHY -DCONFIG_DBG_AX_CAM -DCONFIG_LITTLE_ENDIAN -DCONFIG_IOCTL_CFG80211 -DRTW_USE_CFG80211_STA_EVENT -DCONFIG_RADIO_WORK -I././platform -I././core/crypto -DPHL_PLATFORM_LINUX -DCONFIG_PHL_ARCH -DRTW_PHL_RX -DRTW_PHL_TX -DRTW_PHL_BCN -DDIRTY_FOR_WORK -I././phl/hal_g6 -DCONFIG_RTL8852C  -fsanitize=bounds-strict -fsanitize=shift -fsanitize=bool -fsanitize=enum  -fsanitize=signed-integer-overflow  -DMODULE  -DKBUILD_BASENAME='"rtl8852c_cmd"' -DKBUILD_MODNAME='"8852cu"' -D__KBUILD_MODNAME=kmod_8852cu -c -o phl/hal_g6/rtl8852c/rtl8852c_cmd.o phl/hal_g6/rtl8852c/rtl8852c_cmd.c   ; /usr/src/linux-headers-6.14.0-28-generic/tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --retpoline --rethunk --sls --stackval --static-call --uaccess --prefix=16   --module phl/hal_g6/rtl8852c/rtl8852c_cmd.o

source_phl/hal_g6/rtl8852c/rtl8852c_cmd.o := phl/hal_g6/rtl8852c/rtl8852c_cmd.c

deps_phl/hal_g6/rtl8852c/rtl8852c_cmd.o := \
  /usr/src/linux-headers-6.14.0-28-generic/include/linux/compiler-version.h \
    $(wildcard include/config/CC_VERSION_TEXT) \
  /usr/src/linux-headers-6.14.0-28-generic/include/linux/kconfig.h \
    $(wildcard include/config/CPU_BIG_ENDIAN) \
    $(wildcard include/config/BOOGER) \
    $(wildcard include/config/FOO) \
  /usr/src/linux-headers-6.14.0-28-generic/include/linux/compiler_types.h \
    $(wildcard include/config/DEBUG_INFO_BTF) \
    $(wildcard include/config/PAHOLE_HAS_BTF_TAG) \
    $(wildcard include/config/FUNCTION_ALIGNMENT) \
    $(wildcard include/config/CC_HAS_SANE_FUNCTION_ALIGNMENT) \
    $(wildcard include/config/X86_64) \
    $(wildcard include/config/ARM64) \
    $(wildcard include/config/LD_DEAD_CODE_DATA_ELIMINATION) \
    $(wildcard include/config/LTO_CLANG) \
    $(wildcard include/config/HAVE_ARCH_COMPILER_H) \
    $(wildcard include/config/CC_HAS_COUNTED_BY) \
    $(wildcard include/config/UBSAN_SIGNED_WRAP) \
    $(wildcard include/config/CC_HAS_ASM_INLINE) \
  /usr/src/linux-headers-6.14.0-28-generic/include/linux/compiler_attributes.h \
  /usr/src/linux-headers-6.14.0-28-generic/include/linux/compiler-gcc.h \
    $(wildcard include/config/MITIGATION_RETPOLINE) \
    $(wildcard include/config/ARCH_USE_BUILTIN_BSWAP) \
    $(wildcard include/config/SHADOW_CALL_STACK) \
    $(wildcard include/config/KCOV) \

phl/hal_g6/rtl8852c/rtl8852c_cmd.o: $(deps_phl/hal_g6/rtl8852c/rtl8852c_cmd.o)

$(deps_phl/hal_g6/rtl8852c/rtl8852c_cmd.o):

phl/hal_g6/rtl8852c/rtl8852c_cmd.o: $(wildcard /usr/src/linux-headers-6.14.0-28-generic/tools/objtool/objtool)
