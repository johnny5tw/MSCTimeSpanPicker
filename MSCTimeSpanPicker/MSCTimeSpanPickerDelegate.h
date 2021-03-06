//
//  MSCTimeSpanPickerDelegate.h
//  MSCTimeSpanPicker
//
//  Created by Manfred Scheiner (@scheinem) on 24.07.13.
//  Copyright (c) 2013 Manfred Scheiner (@scheinem). All rights reserved.
//

@class MSCTimeSpanPicker;

@protocol MSCTimeSpanPickerDelegate <NSObject>

@required
- (void)timeSpanPickerSaved:(MSCTimeSpanPicker *)timeSpanPicker;

@optional
- (void)timeSpanPicker:(MSCTimeSpanPicker *)timeSpanPicker selectedFrom:(NSDate *)from andTo:(NSDate *)to;
- (void)timeSpanPickerCancelled:(MSCTimeSpanPicker *)timeSpanPicker;

@end
