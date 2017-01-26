/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:08 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIImage, NSString, NSArray, NSURL;


@protocol SearchUIResult <NSObject>
@property (nonatomic,readonly) UIImage * image; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,readonly) unsigned long long titleMaxLines; 
@property (nonatomic,copy,readonly) NSString * secondaryTitle; 
@property (nonatomic,readonly) NSArray * richTextItems; 
@property (nonatomic,copy,readonly) NSString * footnote; 
@property (nonatomic,readonly) id<SearchUIActionButtonItem> actionButton; 
@property (nonatomic,readonly) id<SearchUIAuxiliaryInfo> auxiliaryInfo; 
@property (nonatomic,copy,readonly) NSArray * cardSections; 
@property (nonatomic,copy,readonly) NSArray * rowSections; 
@property (nonatomic,copy,readonly) NSURL * destinationURL; 
@property (nonatomic,readonly) BOOL centered; 
@property (nonatomic,readonly) BOOL requiresTwoLineTitles; 
@property (nonatomic,readonly) BOOL secondaryTitleDetached; 
@property (nonatomic,readonly) BOOL shouldCropImageToCircle; 
@property (nonatomic,readonly) double imageCornerRadius; 
@property (nonatomic,readonly) UIImage * secondaryImage; 
@property (nonatomic,copy,readonly) NSURL * cardURL; 
@optional
-(void)didDisplayResultWithRefreshHandler:(/*^block*/id)arg1;
-(NSURL *)cardURL;
-(UIImage *)secondaryImage;
-(double)imageCornerRadius;
-(BOOL)shouldCropImageToCircle;
-(BOOL)secondaryTitleDetached;
-(BOOL)requiresTwoLineTitles;

@required
-(NSString *)title;
-(UIImage *)image;
-(NSURL *)destinationURL;
-(NSString *)footnote;
-(NSArray *)richTextItems;
-(NSString *)secondaryTitle;
-(unsigned long long)titleMaxLines;
-(NSArray *)rowSections;
-(NSArray *)cardSections;
-(id<SearchUIAuxiliaryInfo>)auxiliaryInfo;
-(id<SearchUIActionButtonItem>)actionButton;
-(BOOL)centered;

@end

