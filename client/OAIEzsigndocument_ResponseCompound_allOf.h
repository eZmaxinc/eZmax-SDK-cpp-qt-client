/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.12
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsigndocument_ResponseCompound_allOf.h
 *
 * 
 */

#ifndef OAIEzsigndocument_ResponseCompound_allOf_H
#define OAIEzsigndocument_ResponseCompound_allOf_H

#include <QJsonObject>

#include "OAICustom_Ezsignfoldersignerassociationstatus_Response.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAICustom_Ezsignfoldersignerassociationstatus_Response;

class OAIEzsigndocument_ResponseCompound_allOf : public OAIObject {
public:
    OAIEzsigndocument_ResponseCompound_allOf();
    OAIEzsigndocument_ResponseCompound_allOf(QString json);
    ~OAIEzsigndocument_ResponseCompound_allOf() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getIEzsigndocumentStepformtotal() const;
    void setIEzsigndocumentStepformtotal(const qint32 &i_ezsigndocument_stepformtotal);
    bool is_i_ezsigndocument_stepformtotal_Set() const;
    bool is_i_ezsigndocument_stepformtotal_Valid() const;

    qint32 getIEzsigndocumentStepformcurrent() const;
    void setIEzsigndocumentStepformcurrent(const qint32 &i_ezsigndocument_stepformcurrent);
    bool is_i_ezsigndocument_stepformcurrent_Set() const;
    bool is_i_ezsigndocument_stepformcurrent_Valid() const;

    qint32 getIEzsigndocumentStepsignaturetotal() const;
    void setIEzsigndocumentStepsignaturetotal(const qint32 &i_ezsigndocument_stepsignaturetotal);
    bool is_i_ezsigndocument_stepsignaturetotal_Set() const;
    bool is_i_ezsigndocument_stepsignaturetotal_Valid() const;

    qint32 getIEzsigndocumentStepsignatureCurrent() const;
    void setIEzsigndocumentStepsignatureCurrent(const qint32 &i_ezsigndocument_stepsignature_current);
    bool is_i_ezsigndocument_stepsignature_current_Set() const;
    bool is_i_ezsigndocument_stepsignature_current_Valid() const;

    QList<OAICustom_Ezsignfoldersignerassociationstatus_Response> getAObjEzsignfoldersignerassociationstatus() const;
    void setAObjEzsignfoldersignerassociationstatus(const QList<OAICustom_Ezsignfoldersignerassociationstatus_Response> &a_obj_ezsignfoldersignerassociationstatus);
    bool is_a_obj_ezsignfoldersignerassociationstatus_Set() const;
    bool is_a_obj_ezsignfoldersignerassociationstatus_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 i_ezsigndocument_stepformtotal;
    bool m_i_ezsigndocument_stepformtotal_isSet;
    bool m_i_ezsigndocument_stepformtotal_isValid;

    qint32 i_ezsigndocument_stepformcurrent;
    bool m_i_ezsigndocument_stepformcurrent_isSet;
    bool m_i_ezsigndocument_stepformcurrent_isValid;

    qint32 i_ezsigndocument_stepsignaturetotal;
    bool m_i_ezsigndocument_stepsignaturetotal_isSet;
    bool m_i_ezsigndocument_stepsignaturetotal_isValid;

    qint32 i_ezsigndocument_stepsignature_current;
    bool m_i_ezsigndocument_stepsignature_current_isSet;
    bool m_i_ezsigndocument_stepsignature_current_isValid;

    QList<OAICustom_Ezsignfoldersignerassociationstatus_Response> a_obj_ezsignfoldersignerassociationstatus;
    bool m_a_obj_ezsignfoldersignerassociationstatus_isSet;
    bool m_a_obj_ezsignfoldersignerassociationstatus_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigndocument_ResponseCompound_allOf)

#endif // OAIEzsigndocument_ResponseCompound_allOf_H
