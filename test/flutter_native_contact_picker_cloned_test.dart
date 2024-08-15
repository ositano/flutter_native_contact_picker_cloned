import 'package:flutter_test/flutter_test.dart';
import 'package:flutter_native_contact_picker_cloned/flutter_native_contact_picker_cloned.dart';
import 'package:flutter_native_contact_picker_cloned/flutter_native_contact_picker_cloned_platform_interface.dart';
import 'package:flutter_native_contact_picker_cloned/flutter_native_contact_picker_cloned_method_channel.dart';
import 'package:plugin_platform_interface/plugin_platform_interface.dart';

class MockFlutterNativeContactPickerClonedPlatform
    with MockPlatformInterfaceMixin
    implements FlutterNativeContactPickerClonedPlatform {

  @override
  Future<String?> getPlatformVersion() => Future.value('42');
}

void main() {
  final FlutterNativeContactPickerClonedPlatform initialPlatform = FlutterNativeContactPickerClonedPlatform.instance;

  test('$MethodChannelFlutterNativeContactPickerCloned is the default instance', () {
    expect(initialPlatform, isInstanceOf<MethodChannelFlutterNativeContactPickerCloned>());
  });

  test('getPlatformVersion', () async {
    FlutterNativeContactPickerCloned flutterNativeContactPickerClonedPlugin = FlutterNativeContactPickerCloned();
    MockFlutterNativeContactPickerClonedPlatform fakePlatform = MockFlutterNativeContactPickerClonedPlatform();
    FlutterNativeContactPickerClonedPlatform.instance = fakePlatform;

    expect(await flutterNativeContactPickerClonedPlugin.getPlatformVersion(), '42');
  });
}
