//
//  DetailViewController.h
//  RetroPhoneHunter
//

//  Created by Lohit Talasila
//  Copyright (c) 2015 Lohit Talasila. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import <MapKit/MapKit.h>

#import "PhoneBooth.h"

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate, UITextViewDelegate,
                                                    UINavigationControllerDelegate, UIImagePickerControllerDelegate,
                                                    UIPopoverControllerDelegate, UIActionSheetDelegate,
                                                    CLLocationManagerDelegate>

@property (strong, nonatomic) PhoneBooth * detailItem;
@property (weak, nonatomic) IBOutlet UIImageView *imageView;
@property (weak, nonatomic) IBOutlet UILabel *locationLabel;
@property (weak, nonatomic) IBOutlet UITextField *nameField;
@property (weak, nonatomic) IBOutlet UITextField *cityField;
@property (weak, nonatomic) IBOutlet UITextView *notesView;
@property (weak, nonatomic) IBOutlet UIButton *takePictureButton;
@property (weak, nonatomic) IBOutlet MKMapView *mapView;
- (IBAction)nameFieldEditingChanged:(id)sender;
- (IBAction)cityFieldEditingChanged:(id)sender;
- (IBAction)takePictureButtonPressed:(id)sender;
- (IBAction)locatePhoneboothButtonPressed:(id)sender;

@end
