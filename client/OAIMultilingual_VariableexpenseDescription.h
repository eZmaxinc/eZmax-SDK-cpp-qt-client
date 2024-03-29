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
 * OAIMultilingual_VariableexpenseDescription.h
 *
 * The description of the Variableexpense
 */

#ifndef OAIMultilingual_VariableexpenseDescription_H
#define OAIMultilingual_VariableexpenseDescription_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIMultilingual_VariableexpenseDescription : public OAIObject {
public:
    OAIMultilingual_VariableexpenseDescription();
    OAIMultilingual_VariableexpenseDescription(QString json);
    ~OAIMultilingual_VariableexpenseDescription() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSVariableexpenseDescription1() const;
    void setSVariableexpenseDescription1(const QString &s_variableexpense_description1);
    bool is_s_variableexpense_description1_Set() const;
    bool is_s_variableexpense_description1_Valid() const;

    QString getSVariableexpenseDescription2() const;
    void setSVariableexpenseDescription2(const QString &s_variableexpense_description2);
    bool is_s_variableexpense_description2_Set() const;
    bool is_s_variableexpense_description2_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString s_variableexpense_description1;
    bool m_s_variableexpense_description1_isSet;
    bool m_s_variableexpense_description1_isValid;

    QString s_variableexpense_description2;
    bool m_s_variableexpense_description2_isSet;
    bool m_s_variableexpense_description2_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIMultilingual_VariableexpenseDescription)

#endif // OAIMultilingual_VariableexpenseDescription_H
