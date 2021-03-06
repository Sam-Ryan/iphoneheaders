/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:58:12 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <WebCore/WebScriptObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class DOMStyleSheet;

@interface DOMObject : WebScriptObject <NSCopying> {

	DOMObjectInternalRef _internal;

}

@property (readonly) DOMStyleSheet * sheet; 
-(oneway void)release;
-(oneway void)_webcore_releaseOnWebThread;
-(DOMStyleSheet *)sheet;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

