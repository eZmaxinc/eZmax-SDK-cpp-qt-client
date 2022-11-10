/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.16
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsignsignature_RequestCompound_allOf.h
 *
 * 
 */

#ifndef OAIEzsignsignature_RequestCompound_allOf_H
#define OAIEzsignsignature_RequestCompound_allOf_H

#include <QJsonObject>

#include "OAIEzsignsignaturecustomdate_RequestCompound.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsignsignaturecustomdate_RequestCompound;

class OAIEzsignsignature_RequestCompound_allOf : public OAIObject {
public:
    OAIEzsignsignature_RequestCompound_allOf();
    OAIEzsignsignature_RequestCompound_allOf(QString json);
    ~OAIEzsignsignature_RequestCompound_allOf() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    bool isBEzsignsignatureCustomdate() const;
    void setBEzsignsignatureCustomdate(const bool &b_ezsignsignature_customdate);
    bool is_b_ezsignsignature_customdate_Set() const;
    bool is_b_ezsignsignature_customdate_Valid() const;

    QList<OAIEzsignsignaturecustomdate_RequestCompound> getAObjEzsignsignaturecustomdate() const;
    void setAObjEzsignsignaturecustomdate(const QList<OAIEzsignsignaturecustomdate_RequestCompound> &a_obj_ezsignsignaturecustomdate);
    bool is_a_obj_ezsignsignaturecustomdate_Set() const;
    bool is_a_obj_ezsignsignaturecustomdate_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    bool b_ezsignsignature_customdate;
    bool m_b_ezsignsignature_customdate_isSet;
    bool m_b_ezsignsignature_customdate_isValid;

    QList<OAIEzsignsignaturecustomdate_RequestCompound> a_obj_ezsignsignaturecustomdate;
    bool m_a_obj_ezsignsignaturecustomdate_isSet;
    bool m_a_obj_ezsignsignaturecustomdate_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignsignature_RequestCompound_allOf)

#endif // OAIEzsignsignature_RequestCompound_allOf_H
