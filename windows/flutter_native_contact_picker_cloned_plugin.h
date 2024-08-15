#ifndef FLUTTER_PLUGIN_FLUTTER_NATIVE_CONTACT_PICKER_CLONED_PLUGIN_H_
#define FLUTTER_PLUGIN_FLUTTER_NATIVE_CONTACT_PICKER_CLONED_PLUGIN_H_

#include <flutter/method_channel.h>
#include <flutter/plugin_registrar_windows.h>

#include <memory>

namespace flutter_native_contact_picker_cloned {

class FlutterNativeContactPickerClonedPlugin : public flutter::Plugin {
 public:
  static void RegisterWithRegistrar(flutter::PluginRegistrarWindows *registrar);

  FlutterNativeContactPickerClonedPlugin();

  virtual ~FlutterNativeContactPickerClonedPlugin();

  // Disallow copy and assign.
  FlutterNativeContactPickerClonedPlugin(const FlutterNativeContactPickerClonedPlugin&) = delete;
  FlutterNativeContactPickerClonedPlugin& operator=(const FlutterNativeContactPickerClonedPlugin&) = delete;

  // Called when a method is called on this plugin's channel from Dart.
  void HandleMethodCall(
      const flutter::MethodCall<flutter::EncodableValue> &method_call,
      std::unique_ptr<flutter::MethodResult<flutter::EncodableValue>> result);
};

}  // namespace flutter_native_contact_picker_cloned

#endif  // FLUTTER_PLUGIN_FLUTTER_NATIVE_CONTACT_PICKER_CLONED_PLUGIN_H_
