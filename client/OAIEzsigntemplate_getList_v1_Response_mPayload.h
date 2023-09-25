/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.0
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsigntemplate_getList_v1_Response_mPayload.h
 *
 * Payload for GET /1/object/ezsigntemplate/getList
 */

#ifndef OAIEzsigntemplate_getList_v1_Response_mPayload_H
#define OAIEzsigntemplate_getList_v1_Response_mPayload_H

#include <QJsonObject>

#include "OAIEzsigntemplate_ListElement.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace Ezmaxapi {
class OAIEzsigntemplate_ListElement;

class OAIEzsigntemplate_getList_v1_Response_mPayload : public OAIObject {
public:
    OAIEzsigntemplate_getList_v1_Response_mPayload();
    OAIEzsigntemplate_getList_v1_Response_mPayload(QString json);
    ~OAIEzsigntemplate_getList_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getIRowReturned() const;
    void setIRowReturned(const qint32 &i_row_returned);
    bool is_i_row_returned_Set() const;
    bool is_i_row_returned_Valid() const;

    qint32 getIRowFiltered() const;
    void setIRowFiltered(const qint32 &i_row_filtered);
    bool is_i_row_filtered_Set() const;
    bool is_i_row_filtered_Valid() const;

    QList<OAIEzsigntemplate_ListElement> getAObjEzsigntemplate() const;
    void setAObjEzsigntemplate(const QList<OAIEzsigntemplate_ListElement> &a_obj_ezsigntemplate);
    bool is_a_obj_ezsigntemplate_Set() const;
    bool is_a_obj_ezsigntemplate_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_i_row_returned;
    bool m_i_row_returned_isSet;
    bool m_i_row_returned_isValid;

    qint32 m_i_row_filtered;
    bool m_i_row_filtered_isSet;
    bool m_i_row_filtered_isValid;

    QList<OAIEzsigntemplate_ListElement> m_a_obj_ezsigntemplate;
    bool m_a_obj_ezsigntemplate_isSet;
    bool m_a_obj_ezsigntemplate_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::OAIEzsigntemplate_getList_v1_Response_mPayload)

#endif // OAIEzsigntemplate_getList_v1_Response_mPayload_H
