/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:38:41 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct {
	unsigned pushDataProvider : 1;
	unsigned dataProviderDidLoad : 1;
	unsigned bulletinsWithRequestParameters : 1;
	unsigned bulletinsFilteredByDEPRECATED : 1;
	unsigned bulletinsFilteredByEnabledSectionsDEPRECATED : 1;
	unsigned clearedInfoForBulletins : 1;
	unsigned clearedInfoAndBulletinsForClearingAllBulletins : 1;
	unsigned clearedInfoAndBulletinsForClearingBulletinsByDate : 1;
	unsigned clearedInfoForBulletinsDEPRECATED : 1;
	unsigned attachmentPNGDataForRecordID : 1;
	unsigned attachmentAspectRatioForRecordID : 1;
	unsigned defaultSectionInfo : 1;
	unsigned defaultSubsectionInfos : 1;
	unsigned displayNameForSubsectionID : 1;
	unsigned sectionParameters : 1;
	unsigned migrateSectionInfo : 1;
	unsigned sectionDisplayName : 1;
	unsigned sectionIcon : 1;
	unsigned sectionIconDataDEPRECATED : 1;
	unsigned receiveMessageWithName : 1;
	unsigned noteSectionInfoDidChange : 1;
	unsigned syncBulletinDismissal : 1;
	unsigned handleBulletinActionResponse : 1;
	unsigned universalSectionIdentifier : 1;
	unsigned parentSectionIdentifier : 1;
	unsigned primaryAttachmentDataForRecordID : 1;
	unsigned displayNameForFilterID : 1;
} SCD_Struct_BB3;

