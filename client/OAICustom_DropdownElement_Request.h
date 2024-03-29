/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.18
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAICustom_DropdownElement_Request.h
 *
 * Generic DropdownElement Request
 */

#ifndef OAICustom_DropdownElement_Request_H
#define OAICustom_DropdownElement_Request_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICustom_DropdownElement_Request : public OAIObject {
public:
    OAICustom_DropdownElement_Request();
    OAICustom_DropdownElement_Request(QString json);
    ~OAICustom_DropdownElement_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSLabel() const;
    void setSLabel(const QString &s_label);
    bool is_s_label_Set() const;
    bool is_s_label_Valid() const;

    QString getSValue() const;
    void setSValue(const QString &s_value);
    bool is_s_value_Set() const;
    bool is_s_value_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString s_label;
    bool m_s_label_isSet;
    bool m_s_label_isValid;

    QString s_value;
    bool m_s_value_isSet;
    bool m_s_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICustom_DropdownElement_Request)

#endif // OAICustom_DropdownElement_Request_H
