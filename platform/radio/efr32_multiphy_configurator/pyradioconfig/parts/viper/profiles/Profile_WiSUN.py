from pyradioconfig.parts.bobcat.profiles.Profile_WiSUN import Profile_WiSUN_Bobcat
from pyradioconfig.parts.common.profiles.viper_regs import build_modem_regs_viper
from pyradioconfig.parts.common.profiles.profile_common import buildCrcOutputs, buildFecOutputs, buildFrameOutputs, \
    buildWhiteOutputs
from pyradioconfig.parts.viper.profiles.sw_profile_outputs_common import sw_profile_outputs_common_viper

class profile_wisun_viper(Profile_WiSUN_Bobcat):

    def __init__(self):
        self._profileName = "WiSUN"
        self._readable_name = "WiSUN Profile"
        self._category = ""
        self._description = "Profile used for WiSUN PHYs"
        self._default = False
        self._activation_logic = ""
        self._family = "viper"
        self._sw_profile_outputs_common = sw_profile_outputs_common_viper()

    def build_advanced_profile_inputs(self, model, profile):
        pass

    def build_register_profile_outputs(self, model, profile):
        family = self._family
        build_modem_regs_viper(model, profile, family)
        buildFrameOutputs(model, profile, family)
        buildCrcOutputs(model, profile, family)
        buildWhiteOutputs(model, profile)
        buildFecOutputs(model, profile)