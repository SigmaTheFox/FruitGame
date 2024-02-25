workspace("FruitGame")
	configurations { "Debug", "Release" }

project("FruitGame")
	language("C")
	targetdir("build/%{cfg.buildcfg}")
	includedirs { "include/" }
	libdirs { "lib/" }

	files({ "src/**.c", "include/**.h" })

	postbuildcommands { "{COPYDIR} assets build/%{cfg.buildcfg}/assets/"}

	filter("system:windows")
		kind("ConsoleApp")
		links { "raylib", "winmm"}

	filter("system:linux")
		kind("WindowedApp")
		links { "raylib" }

	filter("configurations:Debug")
		defines({ "DEBUG" })
		symbols("On")
		architecture "x86_64"

	filter("configurations:Release")
		defines({ "NDEBUG" })
		optimize("On")
		architecture "x86_64"
