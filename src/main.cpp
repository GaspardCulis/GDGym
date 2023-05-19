#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>
#include "python_ipc.hpp"

/**
 * Brings cocos2d and all Geode namespaces
 * to the current scope.
 */
using namespace geode::prelude;

/**
 * `$modify` lets you extend and modify GD's
 * classes; to hook a function in Geode,
 * simply $modify the class and write a new
 * function definition with the signature of
 * the one you want to hook.
 */
class $modify(MenuLayer){
	/**
	 * MenuLayer::onMoreGames is a GD function,
	 * so we hook it by simply writing its name
	 * inside a $modified MenuLayer class.
	 *
	 * Note that for all hooks, your signature
	 * has to match exactly - `bool onMoreGames`
	 * would not place a hook!
	 */
	void onMoreGames(CCObject *){
		/**
		 * This is the hook's body. We can do
		 * whatever we want here, but we'll
		 * just call our Python function.
		 */
		PythonIPC::hello();
}
}
;
