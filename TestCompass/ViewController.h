//
//  ViewController.h
//  TestCompass
//
//  Created by Umut Kanbak on 8/17/13.
//  Copyright (c) 2013 Umut Kanbak. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import <CoreLocation/CoreLocation.h>

@interface ViewController : UIViewController <CLLocationManagerDelegate>
{
CLLocationManager *locationManager;
IBOutlet UIImageView *compassImage;
}
@property (nonatomic,retain) CLLocationManager *locationManager;

@end
