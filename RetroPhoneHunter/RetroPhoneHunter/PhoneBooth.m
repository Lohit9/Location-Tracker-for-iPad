//
//  PhoneBooth.m
//  RetroPhoneHunter
//

//  Created by Lohit Talasila
//  Copyright (c) 2015 Lohit Talasila. All rights reserved.
//

#import "PhoneBooth.h"


@implementation PhoneBooth

@dynamic city;
@dynamic name;
@dynamic notes;
@dynamic imagePath;
@dynamic lat;
@dynamic lon;

@dynamic coordinate;

- (CLLocationCoordinate2D)coordinate
{
    return CLLocationCoordinate2DMake([self.lat doubleValue],
                                      [self.lon doubleValue]);
}

- (NSString *)title
{
    return self.name;
}

- (NSString *)subtitle
{
    return self.notes;
}

@end
