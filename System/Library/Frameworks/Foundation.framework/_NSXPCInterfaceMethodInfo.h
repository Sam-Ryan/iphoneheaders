/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:46 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface _NSXPCInterfaceMethodInfo : NSObject {

	char* _replySignature;
	int _replyPosition;
	NSMutableArray* _replyArguments;
	NSMutableArray* _arguments;

}

@property (assign) int replyPosition;                            //@synthesize replyPosition=_replyPosition - In the implementation block
@property (retain) NSMutableArray * replyArguments;              //@synthesize replyArguments=_replyArguments - In the implementation block
@property (retain) NSMutableArray * arguments;                   //@synthesize arguments=_arguments - In the implementation block
-(void)setArguments:(NSMutableArray *)arg1 ;
-(void)setReplySignature:(id)arg1 ;
-(const char*)replySignature;
-(NSMutableArray *)replyArguments;
-(void)setReplyArguments:(NSMutableArray *)arg1 ;
-(int)replyPosition;
-(void)setReplyPosition:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(NSMutableArray *)arguments;
-(void)finalize;
@end

