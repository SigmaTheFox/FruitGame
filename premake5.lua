workspace("FruitGame")
	configurations({ "Debug", "Release" })

project("FruitGame")
	kind("WindowedApp")
	language("C")
	targetdir("build/%{cfg.buildcfg}")
	includedirs { "include" }

	files({ "src/**.c", "include/**.h" })
	links({ "raylib" })

	postbuildcommands { "{COPYDIR} assets build/%{cfg.buildcfg}/"}

	filter("configurations:Debug")
		defines({ "DEBUG" })
		symbols("On")

	filter("configurations:Release")
		defines({ "NDEBUG" })
		optimize("On")

