Pod::Spec.new do |s|
  s.name = 'SatyaObjCLib'
  s.version = '0.1.0'
  s.summary = 'This lib is to test the library with objective c with cocoapod package.'
  s.license = 'MIT'
  s.authors = {"Satya Prakash Dash"=>"satya.saphire@gmail.com"}
  s.homepage = 'https://github.com/satyamub/SatyaObjCLib'
  s.description = 'This is just to check the cocoapod functionality with objective c'
  s.requires_arc = true
  s.source = {}

  s.platform = :ios, '7.0'
  s.ios.platform             = :ios, '7.0'
  s.ios.preserve_paths       = 'ios/SatyaObjCLib.framework'
  s.ios.public_header_files  = 'ios/SatyaObjCLib.framework/Versions/A/Headers/*.h'
  s.ios.resource             = 'ios/SatyaObjCLib.framework/Versions/A/Resources/**/*'
  s.ios.vendored_frameworks  = 'ios/SatyaObjCLib.framework'
end
