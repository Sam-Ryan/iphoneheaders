/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:26 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCache;

@interface _MFTableCellAttributesCache : NSObject {

	NSCache* _attributesCache;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)_didReceiveFontSizeChangeNotification:(id)arg1 ;
-(id)cachedAttributesForIdentifier:(id)arg1 constructionBlock:(/*^block*/id)arg2 ;
@end

