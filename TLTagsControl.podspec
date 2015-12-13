Pod::Spec.new do |s|
  s.name         = 'TLTagsControl'
  s.version      = '1.0.4'
  s.license      =  { :type => 'MIT', :file => 'LICENSE' }
  s.authors      =  { 'ali312' => 'https://github.com/ali312' }
  s.summary      = 'A nice and simple tags input control for iOS'
  s.homepage     = 'https://github.com/ali312/TLTagsControl'

# Source Info
  s.platform     =  :ios, '6.1'
  s.source       =  { :git => 'https://github.com/doublenode/TLTagsControl', :branch => 'master', :tag => s.version.to_s }
  s.source_files = 'TLTagsContol/TLTagsControl.{h,m}'
  s.requires_arc = true
end
