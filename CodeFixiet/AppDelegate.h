//
//  AppDelegate.h
//  
//
//  Created  on 20/06/2016.
//  Copyright (c)  All rights reserved.
//

#import <CoreLocation/CoreLocation.h>
#import <UIKit/UIKit.h>

#import "BeacondoApp.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate, CLLocationManagerDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) BeacondoApp *app;

@property (strong, nonatomic) CLLocationManager *locationManager;

@end

