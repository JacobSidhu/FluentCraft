#include <QColor>  /**Includes the QColor class from the Qt framework.**\

class ColorRoles {

/**
 * @class ColorRoles
 * @brief A class that encapsulates various color roles used in the FluentCraft UI theme system.
 *
 * This class defines a set of color properties that represent different roles
 * within the application's user interface. These roles help maintain consistency
 * in color usage throughout the application, allowing for easier theme management
 * and customization.
 *
 * The color roles can be used to create custom themes by inheriting this class
 * and overriding the color properties as needed. Each role corresponds to a specific
 * UI element or state, facilitating a coherent visual experience.
 */

protected:
    
    QColor Alt;                            ///< Alternative color for UI elements.
    QColor Attention;                      ///< Color used for attention-grabbing elements.
    QColor AttentionBackground;            ///< Background color for attention elements.
    QColor Base;                           ///< Base color for primary UI components.
    QColor BaseAlt;                        ///< Alternative base color.
    QColor Border;                         ///< Color used for borders of UI elements.
    QColor BorderFocused;                  ///< Color of borders when an element is focused.
    QColor Critical;                       ///< Color indicating a critical state.
    QColor CriticalBackground;             ///< Background color for critical states.
    QColor Caution;                        ///< Color for cautionary elements.
    QColor CautionBackground;              ///< Background color for caution elements.
    QColor Default;                        ///< Default color used across the application.
    QColor Disabled;                       ///< Color used for disabled elements.
    QColor Flyout;                         ///< Color for flyout UI components.
    QColor ForStrongFillWhenOnImage;      ///< Color for strong fill on images.
    QColor Inner;                          ///< Color for inner components or details.
    QColor InputActive;                    ///< Color for active input fields.
    QColor Neutral;                        ///< Neutral color for non-emphasized elements.
    QColor NeutralBackground;              ///< Background color for neutral elements.
    QColor OnAccentDefault;                ///< Color for default text on accent backgrounds.
    QColor OnAccentDisabled;               ///< Color for disabled text on accent backgrounds.
    QColor OnAccentSecondary;              ///< Color for secondary text on accent backgrounds.
    QColor OnAccentTertiary;               ///< Color for tertiary text on accent backgrounds.
    QColor Outer;                          ///< Color for outer components or borders.
    QColor Primary;                        ///< Primary color for major UI elements.
    QColor Quarternary;                    ///< Fourth level color role.
    QColor Quinary;                        ///< Fifth level color role.
    QColor Running;                        ///< Color indicating a running or active state.
    QColor Secondary;                      ///< Secondary color for less emphasized elements.
    QColor SelectedText;                   ///< Color for text that is selected.
    QColor SelectedTextBackground;         ///< Background color for selected text.
    QColor Senary;                         ///< Sixth level color role.
    QColor SolidAttentionBackground;       ///< Solid background color for attention elements.
    QColor SolidNeutral;                   ///< Solid neutral color.
    QColor SolidNeutralBackground;         ///< Solid background color for neutral elements.
    QColor Success;                        ///< Color indicating a successful state.
    QColor SuccessBackground;              ///< Background color for successful states.
    QColor ThinAcrylic;                    ///< Color for thin acrylic effects.
    QColor Tertiary;                       ///< Tertiary color for additional emphasis.
    QColor Transparent;                    ///< Color representing transparency.

    // Setters for each color role
    void setAlt(const QColor &color) { Alt = color; }
    void setAttention(const QColor &color) { Attention = color; }
    void setAttentionBackground(const QColor &color) { AttentionBackground = color; }
    void setBase(const QColor &color) { Base = color; }
    void setBaseAlt(const QColor &color) { BaseAlt = color; }
    void setBorder(const QColor &color) { Border = color; }
    void setBorderFocused(const QColor &color) { BorderFocused = color; }
    void setCritical(const QColor &color) { Critical = color; }
    void setCriticalBackground(const QColor &color) { CriticalBackground = color; }
    void setCaution(const QColor &color) { Caution = color; }
    void setCautionBackground(const QColor &color) { CautionBackground = color; }
    void setDefault(const QColor &color) { Default = color; }
    void setDisabled(const QColor &color) { Disabled = color; }
    void setFlyout(const QColor &color) { Flyout = color; }
    void setForStrongFillWhenOnImage(const QColor &color) { ForStrongFillWhenOnImage = color; }
    void setInner(const QColor &color) { Inner = color; }
    void setInputActive(const QColor &color) { InputActive = color; }
    void setNeutral(const QColor &color) { Neutral = color; }
    void setNeutralBackground(const QColor &color) { NeutralBackground = color; }
    void setOnAccentDefault(const QColor &color) { OnAccentDefault = color; }
    void setOnAccentDisabled(const QColor &color) { OnAccentDisabled = color; }
    void setOnAccentSecondary(const QColor &color) { OnAccentSecondary = color; }
    void setOnAccentTertiary(const QColor &color) { OnAccentTertiary = color; }
    void setOuter(const QColor &color) { Outer = color; }
    void setPrimary(const QColor &color) { Primary = color; }
    void setQuarternary(const QColor &color) { Quarternary = color; }
    void setQuinary(const QColor &color) { Quinary = color; }
    void setRunning(const QColor &color) { Running = color; }
    void setSecondary(const QColor &color) { Secondary = color; }
    void setSelectedText(const QColor &color) { SelectedText = color; }
    void setSelectedTextBackground(const QColor &color) { SelectedTextBackground = color; }
    void setSenary(const QColor &color) { Senary = color; }
    void setSolidAttentionBackground(const QColor &color) { SolidAttentionBackground = color; }
    void setSolidNeutral(const QColor &color) { SolidNeutral = color; }
    void setSolidNeutralBackground(const QColor &color) { SolidNeutralBackground = color; }
    void setSuccess(const QColor &color) { Success = color; }
    void setSuccessBackground(const QColor &color) { SuccessBackground = color; }
    void setThinAcrylic(const QColor &color) { ThinAcrylic = color; }
    void setTertiary(const QColor &color) { Tertiary = color; }
    void setTransparent(const QColor &color) { Transparent = color; }

};

