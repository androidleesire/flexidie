/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

//#import "UITableViewDelegate.h"
//#import "SCUpdateFriendDataDelegate.h"
//#import "UIGestureRecognizerDelegate.h"
//#import "SCFeedTableViewCellDelegate.h"
//#import "SCSearchBarDelegate.h"
//#import "SCTimeProfilable.h"
//#import "SCHeaderDataSource.h"
//#import "EGORefreshTableHeaderDelegate.h"
//#import "SKStoreProductViewControllerDelegate.h"
//#import "SCHeaderDelegate.h"
//#import "SCPullToDismissControllerGestureDelegate.h"
//#import "Snapchat-Structs.h"
//#import "UITableViewDataSource.h"
//#import "SCAnimatedFeedBackgroundViewAnimationDelegate.h"
//#import <XXUnknownSuperclass.h> // Unknown library

@class SCUpgradeVersionView, UILabel, SCFeedTableViewCell, SCFeedScoreboardView, SCSearchBar, EGORefreshTableHeaderView, SCHeader, UITapGestureRecognizer, UILongPressGestureRecognizer, Snap, NSArray, NSString, SCAnimatedFeedBackgroundView, SCPullToDismissController, UITableView;
@protocol SCFeedItemDelegate, SCStartChatDelegate, SwipeViewParentDelegate, SCFeedViewDataSourceDelegate, ReplyDelegate, FeedViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SCFeedViewController : NSObject { //XXUnknownSuperclass <EGORefreshTableHeaderDelegate, SCHeaderDataSource, SCHeaderDelegate, SCTimeProfilable, UITableViewDataSource, UITableViewDelegate, SCSearchBarDelegate, UIGestureRecognizerDelegate, SCAnimatedFeedBackgroundViewAnimationDelegate, SCFeedTableViewCellDelegate, SKStoreProductViewControllerDelegate, SCPullToDismissControllerGestureDelegate, SCUpdateFriendDataDelegate> {
	NSArray* _filteredFeedItemList;
	BOOL _searching;
	BOOL _showingSearchBar;
	BOOL _animationInProgress;
	BOOL _reloading;
	BOOL _firstFetchUpdatesRequest;
	BOOL _didLogFirstChatReadyToView;
	BOOL _delayedReloadTableView;
	BOOL _delayedResetData;
	BOOL _cellSwiping;
	BOOL _viewHasAppeared;
	BOOL _viewHasFullyAppeared;
	id<FeedViewControllerDelegate> _delegate;
//	id<SCFeedTableViewCellDelegate> _feedCellDelegate;
	id<SwipeViewParentDelegate> _parentDelegate;
	id<ReplyDelegate> _replyDelegate;
	id<SCStartChatDelegate> _startChatDelegate;
	SCHeader* _header;
	SCFeedScoreboardView* _scoreBoard;
	UITableView* _tableView;
	UILabel* _emptyFeedListPlaceholder;
	id<SCFeedViewDataSourceDelegate> _dataSource;
	SCSearchBar* _searchBar;
	SCAnimatedFeedBackgroundView* _animatedBackgroundView;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	UITapGestureRecognizer* _doubleTapGestureRecognizer;
	UITapGestureRecognizer* _tapToSkipGestureRecognizer;
	EGORefreshTableHeaderView* _refreshHeaderView;
	SCUpgradeVersionView* _upgradeHeader;
	float _lastScrolledYOffset;
	float _lastYOffsetBeforeScrolling;
	UILabel* _sccpActiveLabel;
	id<SCFeedItemDelegate> _swipingFeedItem;
	SCPullToDismissController* _pullToDismissController;
	Snap* _visibleSnap;
	Snap* _lastVisibleSnap;
	Snap* _replaySnap;
	SCFeedTableViewCell* _tappedCell;
	NSString* _selectedUsername;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(copy, nonatomic) NSString* selectedUsername;
@property(retain, nonatomic) SCFeedTableViewCell* tappedCell;
@property(retain, nonatomic) Snap* replaySnap;
@property(retain, nonatomic) Snap* lastVisibleSnap;
@property(retain, nonatomic) Snap* visibleSnap;
@property(assign, nonatomic) BOOL viewHasFullyAppeared;
@property(assign, nonatomic) BOOL viewHasAppeared;
@property(retain, nonatomic) SCPullToDismissController* pullToDismissController;
@property(assign, nonatomic) id<SCFeedItemDelegate> swipingFeedItem;
@property(assign, nonatomic) BOOL cellSwiping;
@property(assign, nonatomic) BOOL delayedResetData;
@property(assign, nonatomic) BOOL delayedReloadTableView;
@property(retain, nonatomic) UILabel* sccpActiveLabel;
@property(assign, nonatomic) float lastYOffsetBeforeScrolling;
@property(assign, nonatomic) float lastScrolledYOffset;
@property(assign, nonatomic) BOOL didLogFirstChatReadyToView;
@property(assign, nonatomic) BOOL firstFetchUpdatesRequest;
@property(retain, nonatomic) SCUpgradeVersionView* upgradeHeader;
@property(retain, nonatomic) EGORefreshTableHeaderView* refreshHeaderView;
@property(assign, nonatomic) BOOL reloading;
@property(retain, nonatomic) UITapGestureRecognizer* tapToSkipGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer* doubleTapGestureRecognizer;
@property(retain, nonatomic) UILongPressGestureRecognizer* longPressGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer* tapGestureRecognizer;
@property(assign, nonatomic) BOOL animationInProgress;
@property(retain, nonatomic) SCAnimatedFeedBackgroundView* animatedBackgroundView;
@property(assign, nonatomic) BOOL showingSearchBar;
@property(assign, nonatomic) BOOL searching;
@property(retain, nonatomic) SCSearchBar* searchBar;
@property(retain, nonatomic) id<SCFeedViewDataSourceDelegate> dataSource;
@property(retain, nonatomic) UILabel* emptyFeedListPlaceholder;
@property(retain, nonatomic) UITableView* tableView;
@property(retain, nonatomic) SCFeedScoreboardView* scoreBoard;
@property(retain, nonatomic) SCHeader* header;
@property(assign, nonatomic)  id<SCStartChatDelegate> startChatDelegate;
@property(assign, nonatomic)  id<ReplyDelegate> replyDelegate;
@property(assign, nonatomic)  id<SwipeViewParentDelegate> parentDelegate;
//@property(assign, nonatomic)  id<SCFeedTableViewCellDelegate> feedCellDelegate;
@property(assign, nonatomic)  id<FeedViewControllerDelegate> delegate;
+(id)profiledSelectorNames;
//-(void).cxx_destruct;
-(id)createFeedLoadingCell;
-(void)snapFailedToPlay:(id)play withError:(id)error;
-(id)replayableSnapsForUsername:(id)username;
-(void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;
-(void)loadNextSnapStack;
-(void)snapExpired:(id)expired;
-(void)promptReplaySnap:(id)snap;
-(void)hideSnap:(id)snap;
-(void)showSnap:(id)snap;
-(BOOL)shouldShowNotificationInCurrentMediaState;
-(BOOL)showingMediaView;
-(id)mediaView;
-(id)feedItemForIndex:(id)index;
-(id)feedItemForCell:(id)cell;
-(void)updateFriendmojiData;
-(void)showPopup;
-(void)cellDidEndPulling:(id)cell;
-(void)cell:(id)cell didChangePullingOffset:(float)offset;
-(void)cellDidBeginPulling:(id)cell;
-(void)cellDidEndScrolling:(id)cell;
-(void)cellDidBeginScrolling:(id)cell;
-(BOOL)isNearLoadingCellIndexPath:(id)path;
-(BOOL)isLoadingCellIndexPath:(id)path;
-(int)loadingCellIndexRow;
-(BOOL)isLoadingCellAtPoint:(CGPoint)point;
-(void)updateFeedCell:(id)cell;
-(void)updateUpgradeHeaderIfNecessary;
-(void)didLoadTableViewData;
-(void)didFinishReloadData;
-(void)reloadTableViewDataSource;
-(BOOL)egoRefreshTableHeaderDataSourceIsLoading:(id)loading;
-(void)egoRefreshTableHeaderDidTriggerRefresh:(id)egoRefreshTableHeader;
-(void)feedBackgroundAnimationDidStop;
-(void)feedBackgroundAnimationDidStart;
-(void)filterResults:(id)results;
-(void)searchBarKeyboardWillHide:(id)searchBarKeyboard;
-(void)searchBarDidBeginSearch:(id)searchBar;
-(void)searchBar:(id)bar textDidChange:(id)text;
-(void)searchBar:(id)bar didSearch:(id)search;
-(void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(id)imageForRightButtonInState:(unsigned)state;
-(id)imageForLeftButtonInState:(unsigned)state;
-(id)textColorForHeader:(id)header;
-(id)titleForHeader:(id)header;
-(id)backgroundColorForHeader;
-(void)showCameraForChat:(id)chat;
-(void)exitMediaViewWithSnap:(id)snap;
-(BOOL)touchesBeganForIndex:(id)index;
-(void)updatePullToDismissFinalCircleFrame;
-(BOOL)shouldTriggerPullToDismissWithSwipeDirection:(unsigned)swipeDirection;
-(CGRect)iconViewRectForIndexPath:(id)indexPath;
-(CGRect)iconViewRectForFeedItemUsername:(id)feedItemUsername;
-(void)willTriggerTapToViewAtPoint:(CGPoint)point;
-(BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;
-(BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;
-(void)handleTapForLoadingCellAtPoint:(CGPoint)point;
-(void)tapToSkip:(id)skip;
-(void)doubleTap:(id)tap;
-(void)longPress:(id)press;
-(void)tap:(id)tap;
-(BOOL)shouldDelayUpdateTableView;
-(void)reloadTableView;
-(void)reloadTableViewIfNecessary;
-(void)resetData;
-(void)sccpConnectionStatusChanged:(id)changed;
-(void)visibleSnapStateChanged:(id)changed toSnap:(id)snap withKey:(id)key;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(void)userDidTakeScreenshot;
-(void)dataSourceDidChange;
-(void)viewDidFullyDisappear;
-(void)viewDidFullyAppear;
-(void)viewDidPartiallyAppear;
-(void)viewCanAppear;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewWillResignActive:(id)view;
-(void)didBecomeActive;
-(void)dealloc;
-(void)viewDidLoad;
-(void)updateEmptyFeedListPlaceHolderLabelVisibility;
-(void)updateEmptyFeedListPlaceHolderLabelFrame;
-(void)updateSCCPLabel;
-(void)scrollToTop;
-(BOOL)scrollViewShouldScrollToTop:(id)scrollView;
-(void)scrollViewDidEndScrolling:(id)scrollView;
-(void)scrollViewDidEndDecelerating:(id)scrollView;
-(void)scrollViewWillBeginDragging:(id)scrollView;
-(void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;
-(void)scrollViewDidScroll:(id)scrollView;
-(float)preferredLeftButtonWidth;
-(void)rightButtonPressed;
-(void)leftButtonPressed;
-(void)initRefreshHeader;
-(void)initGestures;
-(void)initializeSCCPStatusLabel;
-(void)initTableView;
-(void)initSearchBar;
-(void)initHeader;
-(void)loadView;
-(id)initWithDataSource:(id)dataSource;
-(id)getPageViewName;
@end

