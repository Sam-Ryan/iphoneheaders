/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:44:00 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct MusicEntityDownloadInformation {
	long long downloadStatus;
	double downloadProgress;
} MusicEntityDownloadInformation;

typedef struct {
	unsigned identifiers : 1;
	unsigned title : 1;
} SCD_Struct_Mu1;

typedef struct {
	unsigned initialized : 1;
	unsigned title : 1;
	unsigned duration : 1;
	unsigned trackNumber : 1;
	unsigned discNumber : 1;
	unsigned explicit : 1;
	unsigned artistUploadedContent : 1;
	unsigned artwork : 1;
	SCD_Struct_Mu1 album;
	SCD_Struct_Mu1 artist;
	SCD_Struct_Mu1 composer;
	SCD_Struct_Mu1 genre;
} SCD_Struct_Mu2;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct UIEdgeInsets {
	double top;
	double left;
	double bottom;
	double right;
} UIEdgeInsets;

typedef struct UIOffset {
	double horizontal;
	double vertical;
} UIOffset;

typedef struct {
	unsigned didUpdateBounds : 1;
} SCD_Struct_Mu6;

typedef struct {
	unsigned didSelectAddButton : 1;
	unsigned didSelectContextualActionsButton : 1;
	unsigned didSelectPlayButton : 1;
	unsigned didLayoutSubviews : 1;
	unsigned shouldLayoutAsEditing : 1;
} SCD_Struct_Mu7;

typedef struct {
	double field1;
	double field2;
	long long field3;
	long long field4;
} SCD_Struct_Mu8;

typedef struct {
	unsigned initialized : 1;
	unsigned itemType : 1;
	unsigned detailedItemType : 1;
	unsigned album : 1;
	unsigned curator : 1;
	unsigned musicVideo : 1;
	unsigned playlist : 1;
	unsigned radioStation : 1;
	unsigned song : 1;
} SCD_Struct_Mu9;

typedef struct _NSZone* NSZoneRef;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct _compressed_pair<_NSRange *, std::__1::allocator<_NSRange> > {
	_NSRange __first_;
} compressed_pair<_NSRange *, std::__1::allocator<_NSRange> >;

typedef struct vector<_NSRange, std::__1::allocator<_NSRange> > {
	_NSRange __begin_;
	_NSRange __end_;
	compressed_pair<_NSRange *, std::__1::allocator<_NSRange> > __end_cap_;
} vector<_NSRange, std::__1::allocator<_NSRange> >;

typedef struct {
	BOOL useCarPlayBrowseTopLevelContentOnly;
	BOOL useCarPlayBrowseTopLevelRequestReorderingHeuristics;
} SCD_Struct_Mu15;

typedef struct __CFArray* CFArrayRef;

typedef struct {
	long long field1;
	unsigned long long field2;
} SCD_Struct_Mu17;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<MusicStoreBrowseDetailedContentItemType, std::__1::__value_type<MusicStoreBrowseDetailedContentItemType, unsigned long>, std::__1::less<MusicStoreBrowseDetailedContentItemType>, true> > {
	unsigned long long __first_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<MusicStoreBrowseDetailedContentItemType, std::__1::__value_type<MusicStoreBrowseDetailedContentItemType, unsigned long>, std::__1::less<MusicStoreBrowseDetailedContentItemType>, true> >;

typedef struct _tree_end_node<std::__1::__tree_node_base<void *> *> {
	__tree_node_base<void *> __left_;
} tree_end_node<std::__1::__tree_node_base<void *> *>;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<MusicStoreBrowseDetailedContentItemType, unsigned long>, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __first_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<MusicStoreBrowseDetailedContentItemType, unsigned long>, void *> > >;

typedef struct _tree<std::__1::__value_type<MusicStoreBrowseDetailedContentItemType, unsigned long>, std::__1::__map_value_compare<MusicStoreBrowseDetailedContentItemType, std::__1::__value_type<MusicStoreBrowseDetailedContentItemType, unsigned long>, std::__1::less<MusicStoreBrowseDetailedContentItemType>, true>, std::__1::allocator<std::__1::__value_type<MusicStoreBrowseDetailedContentItemType, unsigned long> > > {
	__tree_node<std::__1::__value_type<MusicStoreBrowseDetailedContentItemType, unsigned long>, void *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<MusicStoreBrowseDetailedContentItemType, unsigned long>, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<MusicStoreBrowseDetailedContentItemType, std::__1::__value_type<MusicStoreBrowseDetailedContentItemType, unsigned long>, std::__1::less<MusicStoreBrowseDetailedContentItemType>, true> > __pair3_;
} tree<std::__1::__value_type<MusicStoreBrowseDetailedContentItemType, unsigned long>, std::__1::__map_value_compare<MusicStoreBrowseDetailedContentItemType, std::__1::__value_type<MusicStoreBrowseDetailedContentItemType, unsigned long>, std::__1::less<MusicStoreBrowseDetailedContentItemType>, true>, std::__1::allocator<std::__1::__value_type<MusicStoreBrowseDetailedContentItemType, unsigned long> > >;

typedef struct map<MusicStoreBrowseDetailedContentItemType, unsigned long, std::__1::less<MusicStoreBrowseDetailedContentItemType>, std::__1::allocator<std::__1::pair<const MusicStoreBrowseDetailedContentItemType, unsigned long> > > {
	tree<std::__1::__value_type<MusicStoreBrowseDetailedContentItemType, unsigned long>, std::__1::__map_value_compare<MusicStoreBrowseDetailedContentItemType, std::__1::__value_type<MusicStoreBrowseDetailedContentItemType, unsigned long>, std::__1::less<MusicStoreBrowseDetailedContentItemType>, true>, std::__1::allocator<std::__1::__value_type<MusicStoreBrowseDetailedContentItemType, unsigned long> > > __tree_;
} map<MusicStoreBrowseDetailedContentItemType, unsigned long, std::__1::less<MusicStoreBrowseDetailedContentItemType>, std::__1::allocator<std::__1::pair<const MusicStoreBrowseDetailedContentItemType, unsigned long> > >;

typedef struct {
	unsigned initialized : 1;
	unsigned name : 1;
	unsigned shortName : 1;
	unsigned hasSocialPosts : 1;
	unsigned editorNotes : 1;
	unsigned curatorKind : 1;
} SCD_Struct_Mu23;

typedef struct {
	unsigned initialized : 1;
	unsigned title : 1;
	unsigned type : 1;
	unsigned loadAdditionalContentURL : 1;
	unsigned previouslyRetrievedNestedResponse : 1;
	unsigned uniformContentItemType : 1;
	unsigned memberOfChartSet : 1;
	unsigned brick : 1;
} SCD_Struct_Mu24;

typedef struct {
	long long field1;
	long long field2;
	double field3;
} SCD_Struct_Mu25;

typedef struct _compressed_pair<__weak id<MusicEntityProviderDownloadInformationControllerObserver> *, std::__1::allocator<__weak id<MusicEntityProviderDownloadInformationControllerObserver> > > {
	id __first_;
} compressed_pair<__weak id<MusicEntityProviderDownloadInformationControllerObserver> *, std::__1::allocator<__weak id<MusicEntityProviderDownloadInformationControllerObserver> > >;

typedef struct vector<__weak id<MusicEntityProviderDownloadInformationControllerObserver>, std::__1::allocator<__weak id<MusicEntityProviderDownloadInformationControllerObserver> > > {
	id __begin_;
	id __end_;
	compressed_pair<__weak id<MusicEntityProviderDownloadInformationControllerObserver> *, std::__1::allocator<__weak id<MusicEntityProviderDownloadInformationControllerObserver> > > __end_cap_;
} vector<__weak id<MusicEntityProviderDownloadInformationControllerObserver>, std::__1::allocator<__weak id<MusicEntityProviderDownloadInformationControllerObserver> > >;

typedef struct {
	double titleBaselineOffsetFromBottom;
	double titleBaselineOffsetFromTop;
	long long titleFontTextStyle;
	long long titleFontWeight;
} SCD_Struct_Mu28;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct {
	CGRect field1;
	CGRect field2;
	CGRect field3;
} SCD_Struct_Mu30;

typedef struct {
	unsigned initialized : 1;
	unsigned title : 1;
	unsigned trackCount : 1;
	unsigned discCount : 1;
	unsigned explicit : 1;
	unsigned compilation : 1;
	unsigned releaseDate : 1;
	unsigned artwork : 1;
	SCD_Struct_Mu1 artist;
} SCD_Struct_Mu31;

typedef struct {
	unsigned didSelectContextualActionsButton : 1;
	unsigned didSelectPlayButton : 1;
	unsigned shouldLayoutAsEditing : 1;
} SCD_Struct_Mu32;

typedef struct {
	unsigned initialized : 1;
	unsigned title : 1;
	unsigned duration : 1;
	unsigned explicit : 1;
	unsigned artistUploadedContent : 1;
	unsigned artwork : 1;
	SCD_Struct_Mu1 artist;
	SCD_Struct_Mu1 genre;
} SCD_Struct_Mu33;

typedef struct _compressed_pair<std::__1::shared_ptr<std::__1::vector<Music::EditingEntityProviderEntry, std::__1::allocator<Music::EditingEntityProviderEntry> > > *, std::__1::allocator<std::__1::shared_ptr<std::__1::vector<Music::EditingEntityProviderEntry, std::__1::allocator<Music::EditingEntityProviderEntry> > > > > {
	shared_ptr<std::__1::vector<Music::EditingEntityProviderEntry, std::__1::allocator<Music::EditingEntityProviderEntry> > > __first_;
} compressed_pair<std::__1::shared_ptr<std::__1::vector<Music::EditingEntityProviderEntry, std::__1::allocator<Music::EditingEntityProviderEntry> > > *, std::__1::allocator<std::__1::shared_ptr<std::__1::vector<Music::EditingEntityProviderEntry, std::__1::allocator<Music::EditingEntityProviderEntry> > > > >;

typedef struct vector<std::__1::shared_ptr<std::__1::vector<Music::EditingEntityProviderEntry, std::__1::allocator<Music::EditingEntityProviderEntry> > >, std::__1::allocator<std::__1::shared_ptr<std::__1::vector<Music::EditingEntityProviderEntry, std::__1::allocator<Music::EditingEntityProviderEntry> > > > > {
	shared_ptr<std::__1::vector<Music::EditingEntityProviderEntry, std::__1::allocator<Music::EditingEntityProviderEntry> > > __begin_;
	shared_ptr<std::__1::vector<Music::EditingEntityProviderEntry, std::__1::allocator<Music::EditingEntityProviderEntry> > > __end_;
	compressed_pair<std::__1::shared_ptr<std::__1::vector<Music::EditingEntityProviderEntry, std::__1::allocator<Music::EditingEntityProviderEntry> > > *, std::__1::allocator<std::__1::shared_ptr<std::__1::vector<Music::EditingEntityProviderEntry, std::__1::allocator<Music::EditingEntityProviderEntry> > > > > __end_cap_;
} vector<std::__1::shared_ptr<std::__1::vector<Music::EditingEntityProviderEntry, std::__1::allocator<Music::EditingEntityProviderEntry> > >, std::__1::allocator<std::__1::shared_ptr<std::__1::vector<Music::EditingEntityProviderEntry, std::__1::allocator<Music::EditingEntityProviderEntry> > > > >;

typedef struct {
	unsigned didSelectAddSongsButton : 1;
	unsigned didUpdateProductDescription : 1;
	unsigned didUpdatePublicSwitchState : 1;
	unsigned didUpdateVisibleSwitchState : 1;
	unsigned didFinishContentHeightAnimation : 1;
	unsigned willBeginContentHeightAnimation : 1;
	unsigned shouldDeferContentHeightAnimationUpdates : 1;
} SCD_Struct_Mu36;

