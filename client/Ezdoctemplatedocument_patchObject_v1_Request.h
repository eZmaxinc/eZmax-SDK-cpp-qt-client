/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Ezdoctemplatedocument_patchObject_v1_Request.h
 *
 * Request for PATCH /1/object/ezdoctemplatedocument/{pkiEzdoctemplatedocumentID}
 */

#ifndef Ezdoctemplatedocument_patchObject_v1_Request_H
#define Ezdoctemplatedocument_patchObject_v1_Request_H

#include <QJsonObject>

#include "Ezdoctemplatedocument_RequestPatch.h"

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Ezdoctemplatedocument_RequestPatch;

class Ezdoctemplatedocument_patchObject_v1_Request : public Object {
public:
    Ezdoctemplatedocument_patchObject_v1_Request();
    Ezdoctemplatedocument_patchObject_v1_Request(QString json);
    ~Ezdoctemplatedocument_patchObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    Ezdoctemplatedocument_RequestPatch getObjEzdoctemplatedocument() const;
    void setObjEzdoctemplatedocument(const Ezdoctemplatedocument_RequestPatch &obj_ezdoctemplatedocument);
    bool is_obj_ezdoctemplatedocument_Set() const;
    bool is_obj_ezdoctemplatedocument_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    Ezdoctemplatedocument_RequestPatch m_obj_ezdoctemplatedocument;
    bool m_obj_ezdoctemplatedocument_isSet;
    bool m_obj_ezdoctemplatedocument_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezdoctemplatedocument_patchObject_v1_Request)

#endif // Ezdoctemplatedocument_patchObject_v1_Request_H
