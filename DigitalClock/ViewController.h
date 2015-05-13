//
//  ViewController.h
//  DigitalClock
//
//  Created by OSHIMAYOSHIAKI on 2015/05/12.
//  Copyright (c) 2015年 OSHIMAYOSHIAKI. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <GoogleMobileAds/GADInterstitial.h>

@interface ViewController : UIViewController <GADInterstitialDelegate>

@property(nonatomic, strong) GADInterstitial* interstitial;

- (IBAction)showAd:(id)sender;

@end

