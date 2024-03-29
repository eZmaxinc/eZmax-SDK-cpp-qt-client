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
 * OAICustom_AutocompleteElement_Response.h
 *
 * Generic AutocompleteElement Response
 */

#ifndef OAICustom_AutocompleteElement_Response_H
#define OAICustom_AutocompleteElement_Response_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICustom_AutocompleteElement_Response : public OAIObject {
public:
    OAICustom_AutocompleteElement_Response();
    OAICustom_AutocompleteElement_Response(QString json);
    ~OAICustom_AutocompleteElement_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSCategory() const;
    void setSCategory(const QString &s_category);
    bool is_s_category_Set() const;
    bool is_s_category_Valid() const;

    QString getSLabel() const;
    void setSLabel(const QString &s_label);
    bool is_s_label_Set() const;
    bool is_s_label_Valid() const;

    QString getSValue() const;
    void setSValue(const QString &s_value);
    bool is_s_value_Set() const;
    bool is_s_value_Valid() const;

    Q_DECL_DEPRECATED QString getMValue() const;
    Q_DECL_DEPRECATED void setMValue(const QString &m_value);
    Q_DECL_DEPRECATED bool is_m_value_Set() const;
    Q_DECL_DEPRECATED bool is_m_value_Valid() const;

    bool isBActive() const;
    void setBActive(const bool &b_active);
    bool is_b_active_Set() const;
    bool is_b_active_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString s_category;
    bool m_s_category_isSet;
    bool m_s_category_isValid;

    QString s_label;
    bool m_s_label_isSet;
    bool m_s_label_isValid;

    QString s_value;
    bool m_s_value_isSet;
    bool m_s_value_isValid;

    QString m_value;
    bool m_m_value_isSet;
    bool m_m_value_isValid;

    bool b_active;
    bool m_b_active_isSet;
    bool m_b_active_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICustom_AutocompleteElement_Response)

#endif // OAICustom_AutocompleteElement_Response_H
