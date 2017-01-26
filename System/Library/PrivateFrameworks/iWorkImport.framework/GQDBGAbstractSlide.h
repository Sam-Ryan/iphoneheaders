/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:31 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class GQDSStylesheet, GQDSStyle, GQDBGTitlePlaceholder, GQDBGBodyPlaceholder, GQDBGObjectPlaceholder, GQDBGSlideNumberPlaceholder;

@interface GQDBGAbstractSlide : NSObject {

	GQDSStylesheet* mStylesheet;
	GQDSStyle* mSlideStyle;
	GQDBGTitlePlaceholder* mTitlePlaceholder;
	GQDBGBodyPlaceholder* mBodyPlaceholder;
	GQDBGObjectPlaceholder* mObjectPlaceholder;
	GQDBGSlideNumberPlaceholder* mSlideNumberPlaceholder;
	BOOL mHidden;
	char* mID;
	BOOL mCallGenerator;

}
-(id)slideStyle;
-(int)readAttributesForSlide:(xmlTextReaderRef)arg1 ;
-(void)dealloc;
-(BOOL)isHidden;
-(char*)ID;
-(id)stylesheet;
@end
