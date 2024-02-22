// A common interface for all states that need to be accessed by context
interface State {
    void handle(Context context);
}
