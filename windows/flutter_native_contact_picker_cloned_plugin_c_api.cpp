#include "include/flutter_native_contact_picker_cloned/flutter_native_contact_picker_cloned_plugin_c_api.h"

#include <flutter/plugin_registrar_windows.h>

#include "flutter_native_contact_picker_cloned_plugin.h"

void FlutterNativeContactPickerClonedPluginCApiRegisterWithRegistrar(
    FlutterDesktopPluginRegistrarRef registrar) {
  flutter_native_contact_picker_cloned::FlutterNativeContactPickerClonedPlugin::RegisterWithRegistrar(
      flutter::PluginRegistrarManager::GetInstance()
          ->GetRegistrar<flutter::PluginRegistrarWindows>(registrar));
}
