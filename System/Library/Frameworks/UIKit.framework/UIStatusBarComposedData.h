/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:31:10 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UISystemNavigationAction;

@interface UIStatusBarComposedData : NSObject <NSCopying> {

	SCD_Struct_UI77 _rawData;
	BOOL _itemEnabled[36];
	NSString* _doubleHeightStatus;
	UISystemNavigationAction* _systemNavigationItem;

}

@property (nonatomic,readonly) SCD_Struct_UI77* rawData; 
@property (nonatomic,copy) NSString * doubleHeightStatus;                                  //@synthesize doubleHeightStatus=_doubleHeightStatus - In the implementation block
@property (nonatomic,retain) UISystemNavigationAction * systemNavigationItem;              //@synthesize systemNavigationItem=_systemNavigationItem - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCD_Struct_UI77*)rawData;
-(UISystemNavigationAction *)systemNavigationItem;
-(NSString *)doubleHeightStatus;
-(void)setItem:(int)arg1 enabled:(BOOL)arg2 ;
-(BOOL)isItemEnabled:(int)arg1 ;
-(id)initWithRawData:(const SCD_Struct_UI77*)arg1 ;
-(void)setSystemNavigationItem:(UISystemNavigationAction *)arg1 ;
-(void)setDoubleHeightStatus:(NSString *)arg1 ;
@end

