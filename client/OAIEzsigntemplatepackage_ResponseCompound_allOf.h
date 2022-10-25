/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.11
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsigntemplatepackage_ResponseCompound_allOf.h
 *
 * 
 */

#ifndef OAIEzsigntemplatepackage_ResponseCompound_allOf_H
#define OAIEzsigntemplatepackage_ResponseCompound_allOf_H

#include <QJsonObject>

#include "OAIEzsigntemplatepackagemembership_ResponseCompound.h"
#include "OAIEzsigntemplatepackagesigner_ResponseCompound.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsigntemplatepackagesigner_ResponseCompound;
class OAIEzsigntemplatepackagemembership_ResponseCompound;

class OAIEzsigntemplatepackage_ResponseCompound_allOf : public OAIObject {
public:
    OAIEzsigntemplatepackage_ResponseCompound_allOf();
    OAIEzsigntemplatepackage_ResponseCompound_allOf(QString json);
    ~OAIEzsigntemplatepackage_ResponseCompound_allOf() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIEzsigntemplatepackagesigner_ResponseCompound> getAObjEzsigntemplatepackagesigner() const;
    void setAObjEzsigntemplatepackagesigner(const QList<OAIEzsigntemplatepackagesigner_ResponseCompound> &a_obj_ezsigntemplatepackagesigner);
    bool is_a_obj_ezsigntemplatepackagesigner_Set() const;
    bool is_a_obj_ezsigntemplatepackagesigner_Valid() const;

    QList<OAIEzsigntemplatepackagemembership_ResponseCompound> getAObjEzsigntemplatepackagemembership() const;
    void setAObjEzsigntemplatepackagemembership(const QList<OAIEzsigntemplatepackagemembership_ResponseCompound> &a_obj_ezsigntemplatepackagemembership);
    bool is_a_obj_ezsigntemplatepackagemembership_Set() const;
    bool is_a_obj_ezsigntemplatepackagemembership_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIEzsigntemplatepackagesigner_ResponseCompound> a_obj_ezsigntemplatepackagesigner;
    bool m_a_obj_ezsigntemplatepackagesigner_isSet;
    bool m_a_obj_ezsigntemplatepackagesigner_isValid;

    QList<OAIEzsigntemplatepackagemembership_ResponseCompound> a_obj_ezsigntemplatepackagemembership;
    bool m_a_obj_ezsigntemplatepackagemembership_isSet;
    bool m_a_obj_ezsigntemplatepackagemembership_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigntemplatepackage_ResponseCompound_allOf)

#endif // OAIEzsigntemplatepackage_ResponseCompound_allOf_H