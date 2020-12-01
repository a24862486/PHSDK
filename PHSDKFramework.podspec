Pod::Spec.new do |s|
  s.name         = "PHSDKFramework"
  s.version      = "1.0.0"
  s.summary      = "my test to upload framework to CocoaPods"
  s.description  = <<-DESC
                       this is my first framework, now I am learning to upload it to cocoapod
                   DESC
  s.homepage     = "https://github.com/a24862486/PHSDK"
  s.license      = "MIT"
  # s.license      = { :type => "MIT", :file => "FILE_LICENSE" }
  s.author             = "xiaolong1010"
  # s.platform     = :iOS
  s.platform     = :ios, "8.0"

  s.source       = { :git => "https://github.com/a24862486/PHSDK.git", :tag => "#{s.version}" }

  # the framework upload to Cocoa Pods
  s.vendored_frameworks = 'PHSDK.framework'
  s.frameworks = 'Foundation'
end