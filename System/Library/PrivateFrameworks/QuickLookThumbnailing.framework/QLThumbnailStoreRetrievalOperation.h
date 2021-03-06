/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:52:57 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol QLThumbnailGenerationRequestNSXPCProxyCreating;
@class NSURL, NSError, QLThumbnailAddition, NSDictionary, NSData, GSAddition;

@interface QLThumbnailStoreRetrievalOperation : NSOperation {

	NSURL* _documentURL;
	NSError* _error;
	BOOL _finished;
	BOOL _executing;
	BOOL _allowsThumbnailGeneration;
	BOOL _generateThumbnailsAtBackgroundPriority;
	unsigned long long _activity;
	unsigned long long _generationActivity;
	QLThumbnailAddition* _addition;
	id<QLThumbnailGenerationRequest><NSXPCProxyCreating> _thumbnailRequest;
	NSURL* _destinationURL;
	BOOL _thumbnailWasJustAutomaticallyGenerated;

}

@property (assign) BOOL allowsThumbnailGeneration;                                //@synthesize allowsThumbnailGeneration=_allowsThumbnailGeneration - In the implementation block
@property (assign) BOOL generateThumbnailsAtBackgroundPriority;                   //@synthesize generateThumbnailsAtBackgroundPriority=_generateThumbnailsAtBackgroundPriority - In the implementation block
@property (readonly) NSDictionary * thumbnailImagesDictionary; 
@property (readonly) NSData * serializedQuickLookMetadataDictionary; 
@property (retain) NSError * error;                                               //@synthesize error=_error - In the implementation block
@property (readonly) BOOL thumbnailWasAutomaticallyGenerated; 
@property (readonly) GSAddition * genStoreAddition; 
@property (readonly) BOOL thumbnailWasJustAutomaticallyGenerated;                 //@synthesize thumbnailWasJustAutomaticallyGenerated=_thumbnailWasJustAutomaticallyGenerated - In the implementation block
@property (assign,getter=isExecuting,nonatomic) BOOL executing;                   //@synthesize executing=_executing - In the implementation block
@property (assign,getter=isFinished,nonatomic) BOOL finished;                     //@synthesize finished=_finished - In the implementation block
+(BOOL)canMostRecentClientsGenerateThumbnailsForUTI:(id)arg1 ;
-(BOOL)isConcurrent;
-(void)cancel;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)start;
-(void)main;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)setFinished:(BOOL)arg1 ;
-(void)_finishBecauseGenerationFailedWithUnderlyingError:(id)arg1 ;
-(id)issueSandboxExtension;
-(void)_afterThumbnailIsGenerated;
-(void)_generateThumbnail;
-(void)afterThumbnailIsPutInGenstore;
-(GSAddition *)genStoreAddition;
-(BOOL)thumbnailWasAutomaticallyGenerated;
-(BOOL)allowsThumbnailGeneration;
-(void)setAllowsThumbnailGeneration:(BOOL)arg1 ;
-(BOOL)generateThumbnailsAtBackgroundPriority;
-(void)setGenerateThumbnailsAtBackgroundPriority:(BOOL)arg1 ;
-(BOOL)thumbnailWasJustAutomaticallyGenerated;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)_finishWithError:(id)arg1 ;
-(BOOL)_finishIfCancelled;
-(NSDictionary *)thumbnailImagesDictionary;
-(NSData *)serializedQuickLookMetadataDictionary;
-(id)initWithDocumentAtURL:(id)arg1 ;
-(void)setExecuting:(BOOL)arg1 ;
@end

