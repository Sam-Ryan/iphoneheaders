/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:39 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CKDCancelling.h>

@interface CKDCancelToken : NSObject <CKDCancelling> {

	BOOL _isCancelled;
	/*^block*/id _cancelAction;

}

@property (nonatomic,copy) id cancelAction;              //@synthesize cancelAction=_cancelAction - In the implementation block
-(void)cancel;
-(BOOL)isCancelled;
-(void)setCancelAction:(id)arg1 ;
-(id)cancelAction;
@end

