/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:30:54 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UIImage;

@interface UICompositeImageElement : NSObject {

	UIImage* m_image;
	CGRect m_fromRect;
	CGRect m_toRect;
	int m_operation;
	double m_fraction;

}
+(id)elementWithImage:(id)arg1 toRect:(CGRect)arg2 fromRect:(CGRect)arg3 operation:(int)arg4 fraction:(double)arg5 ;
-(id)initWithImage:(id)arg1 toRect:(CGRect)arg2 fromRect:(CGRect)arg3 operation:(int)arg4 fraction:(double)arg5 ;
-(void)draw;
@end

