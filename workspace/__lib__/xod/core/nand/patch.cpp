struct State {
};

{{ GENERATED_CODE }}

void evaluate(Context ctx) {
    auto a = getValue<input_A>(ctx);
    auto b = getValue<input_B>(ctx);
    emitValue<output_NAND>(ctx, !(a && b));
}
