@version = "0.0.1"
Pod::Spec.new do |s| 


s.name         = "LessonCocoPods"
s.version      = @version
s.summary      = "简述"
s.description  = "描述"
s.homepage     = "https://github.com/YanZeqin/LessonCocoPods"

s.license      = { :type => "MIT", :file => "LICENSE" }

s.author       = { "YanZeqin" => "854386200@qq.com" }

s.platform     = :ios, "8.0"


s.source       = { :git => "https://github.com/YanZeqin/LessonCocoPods.git", :tag => "v#{s.version}" }

s.source_files  = "LessonCocoPods/ACCURL/**"
s.requires_arc = true
s.framework   = "UIKit"
end