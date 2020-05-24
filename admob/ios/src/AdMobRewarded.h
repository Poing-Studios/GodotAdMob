#import <GoogleMobileAds/GADRewardedAd.h>
#import "app_delegate.h"

@interface AdMobRewarded: NSObject <GADRewardedAdDelegate> 
{
	GADRewardedAd *rewarded;
	bool initialized;
	int instanceId;
	NSString *testDeviceId;
	NSString *adUnitId;
	ViewController *rootController;
}

- (void)initialize :(int)instance_id :(NSString*)test_device_id;
- (void)load_rewarded :(NSString*)ad_unit_id;
- (void)show_rewarded;

@end