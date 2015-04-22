//
//  PhoneBooth.h
//  RetroPhoneHunter
//

//  Created by Lohit Talasila
//  Copyright (c) 2015 Lohit Talasila. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

#import <MapKit/MapKit.h>

@interface PhoneBooth : NSManagedObject < MKAnnotation >

@property (nonatomic, retain) NSString * city;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * notes;
@property (nonatomic, retain) NSString * imagePath;
@property (nonatomic, retain) NSNumber * lat;
@property (nonatomic, retain) NSNumber * lon;

@property (nonatomic, readonly) CLLocationCoordinate2D coordinate;

- (NSString *)title;
- (NSString *)subtitle;

@end
