/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Common_Response_Warning.h
 *
 * Generic Warning Message
 */

#ifndef Common_Response_Warning_H
#define Common_Response_Warning_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Common_Response_Warning : public Object {
public:
    Common_Response_Warning();
    Common_Response_Warning(QString json);
    ~Common_Response_Warning() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSWarningMessage() const;
    void setSWarningMessage(const QString &s_warning_message);
    bool is_s_warning_message_Set() const;
    bool is_s_warning_message_Valid() const;

    QString getEWarningCode() const;
    void setEWarningCode(const QString &e_warning_code);
    bool is_e_warning_code_Set() const;
    bool is_e_warning_code_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_s_warning_message;
    bool m_s_warning_message_isSet;
    bool m_s_warning_message_isValid;

    QString m_e_warning_code;
    bool m_e_warning_code_isSet;
    bool m_e_warning_code_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Common_Response_Warning)

#endif // Common_Response_Warning_H
