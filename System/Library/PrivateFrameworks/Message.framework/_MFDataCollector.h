/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:48:33 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFGuaranteedCollectingDataConsumer.h>

@class MFMailMessageLibrary, MFLibraryMessage, MFBufferedDataConsumer, NSString;

@interface _MFDataCollector : NSObject <MFGuaranteedCollectingDataConsumer> {

	MFMailMessageLibrary* _library;
	MFLibraryMessage* _message;
	MFBufferedDataConsumer* _consumer;
	NSString* _part;
	BOOL _partial;
	BOOL _incomplete;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)data;
-(void)done;
-(long long)appendData:(id)arg1 ;
-(id)initWithLibrary:(id)arg1 message:(id)arg2 part:(id)arg3 partial:(BOOL)arg4 incomplete:(BOOL)arg5 ;
-(id)pathForStorage;
@end

