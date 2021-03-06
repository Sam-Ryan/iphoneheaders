/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:42:23 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class DDRemoteActionContext;

@interface DDRemoteActionViewControllerProvider : NSObject {

	DDRemoteActionContext* _actionContext;

}

@property (readonly) DDRemoteActionContext * actionContext;              //@synthesize actionContext=_actionContext - In the implementation block
-(id)initWithContext:(id)arg1 ;
-(void)createViewControllerWithCompletionHandler:(/*^block*/id)arg1 ;
-(DDRemoteActionContext *)actionContext;
@end

