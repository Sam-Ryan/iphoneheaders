/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:00 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PFUbiquityLocation, NSError;

@interface PFUbiquityLocationStatus : NSObject {

	BOOL _isLive;
	BOOL _isDeleted;
	BOOL _isDownloaded;
	BOOL _isDownloading;
	BOOL _isUploaded;
	BOOL _isUploading;
	BOOL _isImported;
	BOOL _isScheduled;
	BOOL _isExported;
	BOOL _isFailed;
	PFUbiquityLocation* _location;
	NSError* _error;
	unsigned long long _hash;
	long long _numBytes;
	long long _numNotifications;

}

@property (nonatomic,readonly) BOOL isLive;                                //@synthesize isLive=_isLive - In the implementation block
@property (nonatomic,readonly) BOOL isDeleted;                             //@synthesize isDeleted=_isDeleted - In the implementation block
@property (nonatomic,readonly) BOOL isDownloaded;                          //@synthesize isDownloaded=_isDownloaded - In the implementation block
@property (assign,nonatomic) BOOL isDownloading;                           //@synthesize isDownloading=_isDownloading - In the implementation block
@property (nonatomic,readonly) BOOL isUploaded;                            //@synthesize isUploaded=_isUploaded - In the implementation block
@property (nonatomic,readonly) BOOL isUploading;                           //@synthesize isUploading=_isUploading - In the implementation block
@property (nonatomic,readonly) BOOL isScheduled;                           //@synthesize isScheduled=_isScheduled - In the implementation block
@property (nonatomic,readonly) BOOL isImported;                            //@synthesize isImported=_isImported - In the implementation block
@property (nonatomic,readonly) BOOL isExported;                            //@synthesize isExported=_isExported - In the implementation block
@property (nonatomic,readonly) BOOL isFailed;                              //@synthesize isFailed=_isFailed - In the implementation block
@property (nonatomic,readonly) long long numBytes;                         //@synthesize numBytes=_numBytes - In the implementation block
@property (nonatomic,readonly) NSError * error;                            //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) PFUbiquityLocation * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) long long numNotifications;                 //@synthesize numNotifications=_numNotifications - In the implementation block
-(long long)numBytes;
-(void)statusDidChange;
-(void)checkFileURLState;
-(void)logWasImported;
-(void)logWasScheduled;
-(void)logImportWasCancelled;
-(void)logWasExported;
-(void)encounteredError:(id)arg1 ;
-(void)recoveredFromError;
-(BOOL)isLive;
-(BOOL)isDownloaded;
-(void)setIsDownloading:(BOOL)arg1 ;
-(BOOL)isUploaded;
-(BOOL)isUploading;
-(BOOL)isImported;
-(BOOL)isExported;
-(BOOL)isScheduled;
-(BOOL)isFailed;
-(long long)numNotifications;
-(void)dealloc;
-(id)init;
-(unsigned long long)hash;
-(id)description;
-(PFUbiquityLocation *)location;
-(id)initWithLocation:(id)arg1 ;
-(NSError *)error;
-(BOOL)isDeleted;
-(BOOL)isDownloading;
@end

